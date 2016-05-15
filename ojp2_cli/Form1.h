#pragma once
#include "noisetable.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	protected:
	private: System::Windows::Forms::Button^  buttonRefresh;
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::TextBox^  textBoxResolution;
	private: System::Windows::Forms::RadioButton^  radioButtonMono;
	private: System::Windows::Forms::RadioButton^  radioButtonColor;
	private: System::Windows::Forms::RadioButton^  radioButtonSmooth;
	private: System::Windows::Forms::RadioButton^  radioButtonNoSmooth;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->buttonRefresh = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxResolution = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonMono = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonColor = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSmooth = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNoSmooth = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonRefresh
			// 
			this->buttonRefresh->Location = System::Drawing::Point(659, 86);
			this->buttonRefresh->Name = L"buttonRefresh";
			this->buttonRefresh->Size = System::Drawing::Size(75, 23);
			this->buttonRefresh->TabIndex = 0;
			this->buttonRefresh->Text = L"Refresh";
			this->buttonRefresh->UseVisualStyleBackColor = true;
			this->buttonRefresh->Click += gcnew System::EventHandler(this, &Form1::Form1_Load);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(12, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(640, 640);
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			// 
			// textBoxResolution
			// 
			this->textBoxResolution->Location = System::Drawing::Point(658, 12);
			this->textBoxResolution->Name = L"textBoxResolution";
			this->textBoxResolution->Size = System::Drawing::Size(75, 20);
			this->textBoxResolution->TabIndex = 4;
			this->textBoxResolution->Text = L"640";
			// 
			// radioButtonMono
			// 
			this->radioButtonMono->AutoSize = true;
			this->radioButtonMono->Location = System::Drawing::Point(659, 39);
			this->radioButtonMono->Name = L"radioButtonMono";
			this->radioButtonMono->Size = System::Drawing::Size(87, 17);
			this->radioButtonMono->TabIndex = 5;
			this->radioButtonMono->TabStop = true;
			this->radioButtonMono->Text = L"Monochrome";
			this->radioButtonMono->UseVisualStyleBackColor = true;
			// 
			// radioButtonColor
			// 
			this->radioButtonColor->AutoSize = true;
			this->radioButtonColor->Location = System::Drawing::Point(659, 63);
			this->radioButtonColor->Name = L"radioButtonColor";
			this->radioButtonColor->Size = System::Drawing::Size(49, 17);
			this->radioButtonColor->TabIndex = 6;
			this->radioButtonColor->TabStop = true;
			this->radioButtonColor->Text = L"Color";
			this->radioButtonColor->UseVisualStyleBackColor = true;
			// 
			// radioButtonSmooth
			// 
			this->radioButtonSmooth->AutoSize = true;
			this->radioButtonSmooth->Location = System::Drawing::Point(658, 162);
			this->radioButtonSmooth->Name = L"radioButtonSmooth";
			this->radioButtonSmooth->Size = System::Drawing::Size(61, 17);
			this->radioButtonSmooth->TabIndex = 7;
			this->radioButtonSmooth->TabStop = true;
			this->radioButtonSmooth->Text = L"Smooth";
			this->radioButtonSmooth->UseVisualStyleBackColor = true;
			// 
			// radioButtonNoSmooth
			// 
			this->radioButtonNoSmooth->AutoSize = true;
			this->radioButtonNoSmooth->Location = System::Drawing::Point(658, 139);
			this->radioButtonNoSmooth->Name = L"radioButtonNoSmooth";
			this->radioButtonNoSmooth->Size = System::Drawing::Size(62, 17);
			this->radioButtonNoSmooth->TabIndex = 8;
			this->radioButtonNoSmooth->TabStop = true;
			this->radioButtonNoSmooth->Text = L"Without";
			this->radioButtonNoSmooth->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 672);
			this->Controls->Add(this->radioButtonNoSmooth);
			this->Controls->Add(this->radioButtonSmooth);
			this->Controls->Add(this->radioButtonColor);
			this->Controls->Add(this->radioButtonMono);
			this->Controls->Add(this->textBoxResolution);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->buttonRefresh);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double Parsestring(String^ string) {
			System::Int16 number;

			if (string != "") {
				for (int i = 0; i < string->Length; i++) {
					if (isalpha(string[i]) || ispunct(string[i]) || isspace(string[i])) {
						string = "";
						return 0;
					}
				}
				number = System::Int16::Parse(string);
				if (string->Length > 3) {
					string = "";
					return 0;
				}
				if (System::Int16::Parse(string) < 1)
					return 0;
			}
			else {
				string = "Empty";
				return 0;
			}
			return number;
		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		System::Int16 number = (int)Parsestring(textBoxResolution->Text);
		noisetable at(number, radioButtonColor->Checked);
		System::Threading::Thread::Sleep(500);
		system("convert temp.ppm temp.png");
		System::Threading::Thread::Sleep(500);
		pictureBox->LoadAsync("temp.png");
		//pictureBox->Image=Image::FromFile("temp.png");
	}
	private: System::Void buttonRefresh_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	};


}