#pragma once

namespace Srs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Notepad
	/// </summary>
	public ref class Notepad : public System::Windows::Forms::Form
	{
	public:
		Notepad(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			saveFileDialog1->Filter = "Text File(*.text)|*.txt|TMB Notepad File(*.tmb)|*.tmb";
			saveFileDialog2->Filter = "Text File(*.text)|*.txt";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Notepad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øğèôòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêàØğèôòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèÔîíàToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûäåëèòüÂñåToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûäåëèòüÂñåToolStripMenuItem1;
	private: System::ComponentModel::IContainer^ components;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Notepad::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûäåëèòüÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øğèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêàØğèôòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêèÔîíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->êîïèğîâàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûäåëèòüÂñåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(430, 237);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Notepad::richTextBox1_MouseUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->øğèôòToolStripMenuItem, this->ôîíToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(430, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêğûòüToolStripMenuItem,
					this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüÊàêToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::ñîõğàíèòüÊàêToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->êîïèğîâàòüToolStripMenuItem,
					this->âñòàâèòüToolStripMenuItem, this->âûğåçàòüToolStripMenuItem, this->âûäåëèòüÂñåToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::êîïèğîâàòüToolStripMenuItem_Click);
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::âñòàâèòüToolStripMenuItem_Click);
			// 
			// âûğåçàòüToolStripMenuItem
			// 
			this->âûğåçàòüToolStripMenuItem->Name = L"âûğåçàòüToolStripMenuItem";
			this->âûğåçàòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûğåçàòüToolStripMenuItem->Text = L"Âûğåçàòü";
			this->âûğåçàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::âûğåçàòüToolStripMenuItem_Click);
			// 
			// âûäåëèòüÂñåToolStripMenuItem
			// 
			this->âûäåëèòüÂñåToolStripMenuItem->Name = L"âûäåëèòüÂñåToolStripMenuItem";
			this->âûäåëèòüÂñåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûäåëèòüÂñåToolStripMenuItem->Text = L"Âûäåëèòü âñå";
			this->âûäåëèòüÂñåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::âûäåëèòüÂñåToolStripMenuItem_Click);
			// 
			// øğèôòToolStripMenuItem
			// 
			this->øğèôòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íàñòğîéêàØğèôòàToolStripMenuItem });
			this->øğèôòToolStripMenuItem->Name = L"øğèôòToolStripMenuItem";
			this->øğèôòToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->øğèôòToolStripMenuItem->Text = L"Øğèôò";
			// 
			// íàñòğîéêàØğèôòàToolStripMenuItem
			// 
			this->íàñòğîéêàØğèôòàToolStripMenuItem->Name = L"íàñòğîéêàØğèôòàToolStripMenuItem";
			this->íàñòğîéêàØğèôòàToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->íàñòğîéêàØğèôòàToolStripMenuItem->Text = L"Íàñòğîéêà øğèôòà";
			this->íàñòğîéêàØğèôòàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::íàñòğîéêàØğèôòàToolStripMenuItem_Click);
			// 
			// ôîíToolStripMenuItem
			// 
			this->ôîíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íàñòğîéêèÔîíàToolStripMenuItem });
			this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
			this->ôîíToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->ôîíToolStripMenuItem->Text = L"Ôîí";
			// 
			// íàñòğîéêèÔîíàToolStripMenuItem
			// 
			this->íàñòğîéêèÔîíàToolStripMenuItem->Name = L"íàñòğîéêèÔîíàToolStripMenuItem";
			this->íàñòğîéêèÔîíàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->íàñòğîéêèÔîíàToolStripMenuItem->Text = L"Íàñòğîéêè ôîíà";
			this->íàñòğîéêèÔîíàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Notepad::íàñòğîéêèÔîíàToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->êîïèğîâàòüToolStripMenuItem1,
					this->âñòàâèòüToolStripMenuItem1, this->âûğåçàòüToolStripMenuItem1, this->âûäåëèòüÂñåToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(149, 92);
			// 
			// êîïèğîâàòüToolStripMenuItem1
			// 
			this->êîïèğîâàòüToolStripMenuItem1->Name = L"êîïèğîâàòüToolStripMenuItem1";
			this->êîïèğîâàòüToolStripMenuItem1->Size = System::Drawing::Size(148, 22);
			this->êîïèğîâàòüToolStripMenuItem1->Text = L"Êîïèğîâàòü ";
			this->êîïèğîâàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Notepad::êîïèğîâàòüToolStripMenuItem1_Click);
			// 
			// âñòàâèòüToolStripMenuItem1
			// 
			this->âñòàâèòüToolStripMenuItem1->Name = L"âñòàâèòüToolStripMenuItem1";
			this->âñòàâèòüToolStripMenuItem1->Size = System::Drawing::Size(148, 22);
			this->âñòàâèòüToolStripMenuItem1->Text = L"Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Notepad::âñòàâèòüToolStripMenuItem1_Click);
			// 
			// âûğåçàòüToolStripMenuItem1
			// 
			this->âûğåçàòüToolStripMenuItem1->Name = L"âûğåçàòüToolStripMenuItem1";
			this->âûğåçàòüToolStripMenuItem1->Size = System::Drawing::Size(148, 22);
			this->âûğåçàòüToolStripMenuItem1->Text = L"Âûğåçàòü";
			this->âûğåçàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Notepad::âûğåçàòüToolStripMenuItem1_Click);
			// 
			// âûäåëèòüÂñåToolStripMenuItem1
			// 
			this->âûäåëèòüÂñåToolStripMenuItem1->Name = L"âûäåëèòüÂñåToolStripMenuItem1";
			this->âûäåëèòüÂñåToolStripMenuItem1->Size = System::Drawing::Size(148, 22);
			this->âûäåëèòüÂñåToolStripMenuItem1->Text = L"Âûäåëèòü âñå";
			this->âûäåëèòüÂñåToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Notepad::âûäåëèòüÂñåToolStripMenuItem1_Click);
			// 
			// Notepad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 261);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Notepad";
			this->Text = L"Notepad";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }
		String^ filename = Srs2::Notepad::saveFileDialog1->FileName;
		File::WriteAllText(filename,richTextBox1->Text);
		MessageBox::Show("Ñîõğàíåíî ");    
	}
private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }
	String^ filename = Srs2::Notepad::saveFileDialog2->FileName;
	File::WriteAllText(filename, richTextBox1->Text);
	MessageBox::Show("Save");
}
private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) { return; }
	String^ filename = Srs2::Notepad::openFileDialog1->FileName;
	String^ filetext = File::ReadAllText(filename);
	richTextBox1->Text = filetext;
	MessageBox::Show("Open");
}
private: System::Void êîïèğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->Copy();
	}

}
private: System::Void âñòàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->Paste();
	}
}
private: System::Void âûğåçàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->Cut();
	}
}
private: System::Void íàñòğîéêàØğèôòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->ShowDialog();
	richTextBox1->Font = fontDialog1->Font;
}
private: System::Void íàñòğîéêèÔîíàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	richTextBox1->BackColor = colorDialog1->Color;
}
private: System::Void âûäåëèòüÂñåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->SelectAll();
	}
}
private: System::Void richTextBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button ==System::Windows::Forms::MouseButtons::Right) {
		richTextBox1->ContextMenuStrip = contextMenuStrip1;
	}
}
private: System::Void êîïèğîâàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->Copy();
	}
}
private: System::Void âñòàâèòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->Paste();
	}
}
private: System::Void âûğåçàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->Cut();
	}
}
private: System::Void âûäåëèòüÂñåToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->TextLength > 0) {
		richTextBox1->SelectAll();
	}
}
};
}

