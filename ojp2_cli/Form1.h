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


	private: System::Windows::Forms::TextBox^  textBoxPixelSize;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBoxAutostretch;






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
			this->textBoxPixelSize = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxAutostretch = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonRefresh
			// 
			this->buttonRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRefresh->Location = System::Drawing::Point(658, 159);
			this->buttonRefresh->Name = L"buttonRefresh";
			this->buttonRefresh->Size = System::Drawing::Size(75, 23);
			this->buttonRefresh->TabIndex = 0;
			this->buttonRefresh->Text = L"Refresh";
			this->buttonRefresh->UseVisualStyleBackColor = true;
			this->buttonRefresh->Click += gcnew System::EventHandler(this, &Form1::Form1_Load);
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(640, 640);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			// 
			// textBoxResolution
			// 
			this->textBoxResolution->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBoxResolution->Location = System::Drawing::Point(657, 25);
			this->textBoxResolution->Name = L"textBoxResolution";
			this->textBoxResolution->Size = System::Drawing::Size(75, 20);
			this->textBoxResolution->TabIndex = 4;
			this->textBoxResolution->Text = L"20";
			// 
			// radioButtonMono
			// 
			this->radioButtonMono->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButtonMono->AutoSize = true;
			this->radioButtonMono->Checked = true;
			this->radioButtonMono->Location = System::Drawing::Point(658, 112);
			this->radioButtonMono->Name = L"radioButtonMono";
			this->radioButtonMono->Size = System::Drawing::Size(87, 17);
			this->radioButtonMono->TabIndex = 5;
			this->radioButtonMono->TabStop = true;
			this->radioButtonMono->Text = L"Monochrome";
			this->radioButtonMono->UseVisualStyleBackColor = true;
			// 
			// radioButtonColor
			// 
			this->radioButtonColor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->radioButtonColor->AutoSize = true;
			this->radioButtonColor->Location = System::Drawing::Point(658, 136);
			this->radioButtonColor->Name = L"radioButtonColor";
			this->radioButtonColor->Size = System::Drawing::Size(49, 17);
			this->radioButtonColor->TabIndex = 6;
			this->radioButtonColor->TabStop = true;
			this->radioButtonColor->Text = L"Color";
			this->radioButtonColor->UseVisualStyleBackColor = true;
			// 
			// textBoxPixelSize
			// 
			this->textBoxPixelSize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPixelSize->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBoxPixelSize->Location = System::Drawing::Point(657, 63);
			this->textBoxPixelSize->Name = L"textBoxPixelSize";
			this->textBoxPixelSize->Size = System::Drawing::Size(75, 20);
			this->textBoxPixelSize->TabIndex = 9;
			this->textBoxPixelSize->Text = L"5";
			this->textBoxPixelSize->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(658, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Resolution";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(658, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"PixelSize";
			// 
			// checkBoxAutostretch
			// 
			this->checkBoxAutostretch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBoxAutostretch->AutoSize = true;
			this->checkBoxAutostretch->Location = System::Drawing::Point(659, 189);
			this->checkBoxAutostretch->Name = L"checkBoxAutostretch";
			this->checkBoxAutostretch->Size = System::Drawing::Size(80, 17);
			this->checkBoxAutostretch->TabIndex = 12;
			this->checkBoxAutostretch->Text = L"Autostretch";
			this->checkBoxAutostretch->UseVisualStyleBackColor = true;
			this->checkBoxAutostretch->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxAutostretch_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(740, 640);
			this->Controls->Add(this->checkBoxAutostretch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPixelSize);
			this->Controls->Add(this->radioButtonColor);
			this->Controls->Add(this->radioButtonMono);
			this->Controls->Add(this->textBoxResolution);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->buttonRefresh);
			this->Name = L"Form1";
			this->Text = L"Noise generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
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
		System::Int16 pixelsize = (int)Parsestring(textBoxPixelSize->Text);

		if(number*pixelsize>900 && !radioButtonColor->Checked)
			MessageBox::Show("Creating noise can take some time,please be patient. \nPixel size also increases generating time.",
				"Important Note",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		if (number*pixelsize > 300 && radioButtonColor->Checked) {
			MessageBox::Show("Creating noise can take some time,please be patient.\nGenerating color noise is 3 times slower, try using monochrome mode.",
				"Important Note",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}

		noisetable at(number, radioButtonColor->Checked, pixelsize);
		system("convert temp.ppm temp.png");
		pictureBox->LoadAsync("temp.png");
		//pictureBox->Image=Image::FromFile("temp.png");
	}
	private: System::Void buttonRefresh_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButtonNoSmooth_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBoxAutostretch_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBoxAutostretch->Checked)
		pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
	else
		pictureBox->SizeMode = PictureBoxSizeMode::CenterImage;
}
private: System::Void Form1_Resize(System::Object^  sender, System::EventArgs^  e) {
	pictureBox->Size.Width = pictureBox->Size.Height;
}
};


}