#pragma once
#include<random>
#include<windows.h>
#include<cmath>
#include<fstream>

public class noisetable
{
protected:
	double *table;
	std::random_device r;
	int size;
	bool color;
	int pixelsize;
public:
	noisetable(int xy, bool clr,int pixels) : size(xy), color(clr), pixelsize(pixels)
	{
		int sizemult = size;	
		if (color)
			sizemult *= 3;
			
		std::default_random_engine e1(r());
		std::uniform_real_distribution <double> dist(0, 256);
		table = (double*)calloc(size*sizemult, sizeof(double));
		for (auto j = 0; j < size*sizemult	; j++) {
			table[j] = dist(e1);
			//table[j] = rand() % 256;
		}

		std::fstream file;
		file.open("temp.ppm", std::ios::trunc | std::ios::out);
		if (color)
			file << "P3" << std::endl;
		else
			file << "P2" << std::endl;
		file << size*pixelsize << " " << size*pixelsize << std::endl;
		file << 256 << std::endl;

		for (auto i = 0; i < size; i++) {
			for (auto h = 0; h < pixelsize; h++) {
				for (auto k = 0; k < sizemult; k++) {
					for (auto j = 0; j < pixelsize; j++) {
						if (color) {
							file << (int)table[i*size + k] << " ";
							file << (int)table[i*size + k+1] << " ";
							file << (int)table[i*size + k+2] << " ";
						}
						else
							file << (int)table[i*size+k] << " ";
					}
					if (color)
						k += 2;
				}
				file << std::endl;
			}
		}

		//for (auto j = 0; j < sizemult; j++) {
		//		file << table[j] << " ";
		//}

		file.close();
	}

	double getval(int x) {
		return table[x];
	}
	void setval(double x, int nr) {
		table[nr] = x;
	}
	~noisetable() {
		delete[] table;
	}

	double linear(double x) {
		int xl, xh;
		double yl, yh;
		xl = x;
		xh = xl + 1;
		yl = table[xl];
		yh = table[xh];
		if (xl > xh) {
			double temp;
			temp = xl;
			xl = xh;
			xh = temp;
		}
		if (yl > yh) {
			double temp;
			temp = yl;
			yl = yh;
			yh = temp;
		}
		return (yl + ((yh - yl) / (xh - yh))*(x - xl));
	}

};
