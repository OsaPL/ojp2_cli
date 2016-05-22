#include <fstream>
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{



	private: System::Windows::Forms::Form ^ otherform;
	private: System::Windows::Forms::PictureBox ^ pictureBox;

	private: System::Windows::Forms::CheckBox ^ checkBoxAutostretch;
	public:
		Form2(System::Windows::Forms::Form ^ o, System::Windows::Forms::PictureBox ^ p, System::Windows::Forms::CheckBox ^ c)
		{
			otherform = o;
			pictureBox = p;
			checkBoxAutostretch = c;
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBoxDetach;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBoxDetach = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDetach))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBoxDetach
			// 
			this->pictureBoxDetach->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxDetach->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->pictureBoxDetach->Location = System::Drawing::Point(0, 0);
			this->pictureBoxDetach->Name = L"pictureBoxDetach";
			this->pictureBoxDetach->Size = System::Drawing::Size(344, 330);
			this->pictureBoxDetach->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBoxDetach->TabIndex = 1;
			this->pictureBoxDetach->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 330);
			this->Controls->Add(this->pictureBoxDetach);
			this->Name = L"Form2";
			this->Text = L"Renderer";
			this->TopMost = true;
			this->Activated += gcnew System::EventHandler(this, &Form2::Form2_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form2::Form2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->Validated += gcnew System::EventHandler(this, &Form2::Form2_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDetach))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		std::ifstream ifs("temp.png");
		if (ifs.is_open()) {
			pictureBoxDetach->LoadAsync("temp.png");
		}

	}
private: System::Void Form2_Activated(System::Object^  sender, System::EventArgs^  e) {
	pictureBoxDetach->LoadAsync("temp.png");
	if (checkBoxAutostretch->Checked)
		pictureBoxDetach->SizeMode = PictureBoxSizeMode::Zoom;
	else
		pictureBoxDetach->SizeMode = PictureBoxSizeMode::CenterImage;
}
private: System::Void Form2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	this->Hide();
	otherform->Size = System::Drawing::Size(756, 679);
	pictureBox->Show();
	detach = false;
}
};






	////////////////////////
