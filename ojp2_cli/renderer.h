#include <fstream>
#pragma once
bool detach = true;
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
	public:
		Form2(System::Windows::Forms::Form ^ o)
		{
			otherform = o;
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
	private: System::Windows::Forms::Button^  button1Merge;
	private: System::Windows::Forms::PictureBox^  pictureBoxDetach;
	protected:

	protected:

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
			this->button1Merge = (gcnew System::Windows::Forms::Button());
			this->pictureBoxDetach = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDetach))->BeginInit();
			this->SuspendLayout();
			// 
			// button1Merge
			// 
			this->button1Merge->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1Merge->Location = System::Drawing::Point(336, 12);
			this->button1Merge->Name = L"button1Merge";
			this->button1Merge->Size = System::Drawing::Size(64, 27);
			this->button1Merge->TabIndex = 0;
			this->button1Merge->Text = L"Merge";
			this->button1Merge->UseVisualStyleBackColor = true;
			this->button1Merge->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// pictureBoxDetach
			// 
			this->pictureBoxDetach->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxDetach->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->pictureBoxDetach->Location = System::Drawing::Point(0, 0);
			this->pictureBoxDetach->Name = L"pictureBoxDetach";
			this->pictureBoxDetach->Size = System::Drawing::Size(330, 330);
			this->pictureBoxDetach->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBoxDetach->TabIndex = 1;
			this->pictureBoxDetach->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(407, 330);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBoxDetach);
			this->Controls->Add(this->button1Merge);
			this->Name = L"Form2";
			this->Text = L"Renderer";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		detach = false;
		//otherform->Show();

	}
	};






	////////////////////////
