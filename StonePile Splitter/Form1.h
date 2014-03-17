#pragma once
#include "StonePile.h"
#include <Windows.h>
#include "closeing.h"
#include "demoWind.h"

namespace StonePileSplitter {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Button^  newPile;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::ComponentModel::IContainer^  components;


	private:
		closeing ^form2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  add1;
	private: System::Windows::Forms::Button^  cancel;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::Button^  finish;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Button^  menu;

			 demoWind ^dmo;
//		StonePile pi;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newPile = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->add1 = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->finish = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menu = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->newToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(447, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->pileToolStripMenuItem});
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// pileToolStripMenuItem
			// 
			this->pileToolStripMenuItem->Name = L"pileToolStripMenuItem";
			this->pileToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->pileToolStripMenuItem->Text = L"Pile";
			this->pileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pileToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// newPile
			// 
			this->newPile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->newPile->Location = System::Drawing::Point(63, 177);
			this->newPile->Name = L"newPile";
			this->newPile->Size = System::Drawing::Size(118, 36);
			this->newPile->TabIndex = 1;
			this->newPile->Text = L"Create Pile";
			this->newPile->UseVisualStyleBackColor = true;
			this->newPile->Visible = false;
			this->newPile->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(219, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Demo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// timer1
			// 
			this->timer1->Interval = 30;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(231, 66);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Visible = false;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(231, 104);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Visible = false;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// add1
			// 
			this->add1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->add1->Location = System::Drawing::Point(90, 239);
			this->add1->Name = L"add1";
			this->add1->Size = System::Drawing::Size(126, 23);
			this->add1->TabIndex = 8;
			this->add1->Text = L"Add More Stones\?";
			this->add1->UseVisualStyleBackColor = true;
			this->add1->Visible = false;
			this->add1->Click += gcnew System::EventHandler(this, &Form1::add1_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cancel->Location = System::Drawing::Point(231, 239);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(78, 23);
			this->cancel->TabIndex = 9;
			this->cancel->Text = L"Cancel\?";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Visible = false;
			this->cancel->Click += gcnew System::EventHandler(this, &Form1::cancel_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripProgressBar1});
			this->statusStrip1->Location = System::Drawing::Point(0, 328);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(447, 22);
			this->statusStrip1->TabIndex = 10;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Click += gcnew System::EventHandler(this, &Form1::toolStripProgressBar1_Click);
			// 
			// finish
			// 
			this->finish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->finish->Location = System::Drawing::Point(91, 280);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(90, 23);
			this->finish->TabIndex = 11;
			this->finish->Text = L"Finish\?";
			this->finish->UseVisualStyleBackColor = true;
			this->finish->Visible = false;
			this->finish->Click += gcnew System::EventHandler(this, &Form1::finish_Click);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(140, 280);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(124, 23);
			this->menu->TabIndex = 12;
			this->menu->Text = L"Return to Main";
			this->menu->UseVisualStyleBackColor = true;
			this->menu->Visible = false;
			this->menu->Click += gcnew System::EventHandler(this, &Form1::menu_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(447, 350);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->finish);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->add1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->newPile);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stone Pile Splitter";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//int weight[4];
		StonePile *pile;
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 closeing ^form2 = gcnew closeing();
                 form2->ShowDialog();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->timer1->Start();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 pile = new StonePile;
				 timer2->Start();
				 this->textBox1->Enabled = true;
					this->textBox2->Enabled = true;
					this->textBox3->Enabled = true;
					this->textBox4->Enabled = true;
					this->add1->Enabled = true;
					this->cancel->Enabled = true;
				 //this->progressBar1->Value = 0;
				 //this->timer1->Enabled = false;
			 }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->toolStripProgressBar1->Increment(2);
			 if(this->toolStripProgressBar1->Value == this->toolStripProgressBar1->Maximum){
				 this->newPile->Visible = true;
				 this->button1->Visible = true;
				 this->toolStripProgressBar1->Value = 0;
				 this->timer1->Stop();
			 }
					 
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 dmo = gcnew demoWind();
			 dmo->ShowDialog();
		 }
private: System::Void toolStripProgressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->toolStripProgressBar1->Increment(5);
			 if(this->toolStripProgressBar1->Value == this->toolStripProgressBar1->Maximum){
					this->textBox1->Visible = true;
					this->textBox2->Visible = true;
					this->textBox3->Visible = true;
					this->textBox4->Visible = true;
					this->add1->Visible = true;
					this->cancel->Visible = true;
					this->finish->Visible = true;
					this->newPile->Visible = false;
					this->button1->Visible = false;
					this->toolStripProgressBar1->Value = 0;
					this->timer2->Stop();
				 }
				 
		 }
private: System::Void add1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int reset = 0;
			// CString textVal;
			 //textVal.Format(_T("%d"), 0);
			 int weight[4];
			 weight[0] = Convert::ToInt32(this->textBox1->Text);
			 weight[1] = Convert::ToInt32(this->textBox2->Text);
			 weight[2] = Convert::ToInt32(this->textBox3->Text);
			 weight[3] = Convert::ToInt32(this->textBox4->Text);
			this->textBox1->Text = Convert::ToString(reset);//textVal;
			this->textBox2->Text = Convert::ToString(reset);//textVal;
			this->textBox3->Text = Convert::ToString(reset);//textVal;
			this->textBox4->Text = Convert::ToString(reset);//textVal;
			 for(int x = 0; x < 4; x++)
				 if( weight[x] != 0 )//add only if stones have a weight -- indicates the stone was truly added
					 pile->addStone(new Stone(weight[x]));
		 }
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 pile->destroy();
			 this->textBox1->Visible = false;
			 this->textBox2->Visible = false;
			 this->textBox3->Visible = false;
			 this->textBox4->Visible = false;
			 this->add1->Visible = false;
			 this->cancel->Visible = false;
			 this->finish->Visible = false;
			 this->newPile->Visible = true;
			 this->button1->Visible = true;
			 this->toolStripProgressBar1->Value = 0;
		 }

private: System::Void finish_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->finish->Visible = false;
			 timer3->Start();
		 }

private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int reset = 0;
			// CString textVal;
			 //textVal.Format(_T("%d"), 0);
			 int weight[4];
			 weight[0] = Convert::ToInt32(this->textBox1->Text);
			 weight[1] = Convert::ToInt32(this->textBox2->Text);
			 weight[2] = Convert::ToInt32(this->textBox3->Text);
			 weight[3] = Convert::ToInt32(this->textBox4->Text);
			this->textBox1->Text = Convert::ToString(reset);//textVal;
			this->textBox2->Text = Convert::ToString(reset);//textVal;
			this->textBox3->Text = Convert::ToString(reset);//textVal;
			this->textBox4->Text = Convert::ToString(reset);//textVal;
			 for(int x = 0; x < 4; x++)
				 if( weight[x] != 0 )//add only if stones have a weight -- indicates the stone was truly added
					 pile->addStone(new Stone(weight[x]));
			 this->textBox1->Enabled = false;
				 this->textBox2->Enabled = false;
				 this->textBox3->Enabled = false;
				 this->textBox4->Enabled = false;
				 this->add1->Enabled = false;
				 this->cancel->Enabled = false;

			 this->toolStripProgressBar1->Increment(5);
			 if(this->toolStripProgressBar1->Value == this->toolStripProgressBar1->Maximum){
				 this->textBox1->Visible = false;
				 this->textBox2->Visible = false;
				 this->textBox3->Visible = false;
				 this->textBox4->Visible = false;
				 this->add1->Visible = false;
				 this->cancel->Visible = false;
				 this->finish->Visible = false;
				 this->newPile->Visible = false;
				 this->button1->Visible = false;
				 this->toolStripProgressBar1->Value = 0;
				 this->timer3->Stop();
				 //progress bar loading stops

				 int xpos = 13, ypos = 60;
				 //srand(time(NULL));
				 Label ^Lbl, ^hover;
				 StonePile b;
				 Stone *temp, *item, *test;
				 
				 pile->sort();
				 //sp.display();
				 hover = gcnew Label();
				 hover->Text = "OriginalPile:\n ";
				 hover->AutoSize = true;
				 hover->Location = Point(xpos,ypos-30);
				 this->Controls->Add(hover);
				 
				 for(temp = pile->getHead(); temp ;temp = temp->getNext()){
					 Lbl = gcnew Label();
					 Lbl->AutoSize = true;
					 Lbl->Location = Point(xpos,ypos);
					 Lbl->BackColor = System::Drawing::Color::Black;
					 Lbl->ForeColor = System::Drawing::Color::White;
					 Lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					 Lbl->Text += temp->getWeight()+" lbs ";
					 this->Controls->Add(Lbl);
					 if(xpos < 346)
						 xpos += 41;
					 else{
						 xpos = 12;
						if(ypos < 700)
							 ypos += 20;
					}
					 //Sleep(1000);
				 }
				 Lbl = gcnew Label();
					 Lbl->AutoSize = true;
					 Lbl->Location = Point(xpos,ypos);
					 Lbl->Text += "Overall Weight: "+pile->getWeight()+" lbs ";
					 this->Controls->Add(Lbl);
				 /////////////////////////////////////////////
				///			Split Algorithm start		////
				temp = pile->getHead();
				int hold = 0 ,target = pile->getWeight() / 2;
				while(temp){
					if((b.getWeight() + temp->getWeight()) <= target ){
						item = temp;
						b.addStone(new Stone(temp->getWeight()));
						item = item->getNext();
						pile->remove(temp);
						temp = item;
					}
					else{
						test = temp;
						temp = temp->getNext();
					}
				}
				if(b.getWeight() < target){
					if( b.getWeight() + (2*test->getWeight()) - pile->getWeight() < pile->getWeight() - b.getWeight()){
						b.addStone(new Stone(test->getWeight()));
						pile->remove(test);
					}
				}
				//////		Split Ends Here			////////////////
				////////////////////////////////////////////////////
				//Show ecach Pile in label
				hover = gcnew Label();
				xpos = 13; ypos = 130;
				hover->Text = "Pile 1:\n ";
				hover->AutoSize = true;
				hover->Location = Point(xpos,ypos-30);
				this->Controls->Add(hover);
				 
				for(temp = pile->getHead(); temp ;temp = temp->getNext()){
					Lbl = gcnew Label();
					Lbl->AutoSize = true;
					Lbl->Location = Point(xpos,ypos);
					Lbl->BackColor = System::Drawing::Color::Black;
					 Lbl->ForeColor = System::Drawing::Color::White;
					Lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					Lbl->Text += temp->getWeight()+" lbs ";
					this->Controls->Add(Lbl);
					if(xpos < 346)
						 xpos += 41;
					else{
						 xpos = 12;
						if(ypos < 700)
							 ypos += 20;
					}
					 //Sleep(1000);
				 }
				Lbl = gcnew Label();
					 Lbl->AutoSize = true;
					 Lbl->Location = Point(xpos,ypos);
					 Lbl->Text += "Overall Weight: "+pile->getWeight()+" lbs ";
					 this->Controls->Add(Lbl);
				hover = gcnew Label();
				xpos = 13; ypos = 180;
				hover->Text = "Pile 2:\n ";
				hover->AutoSize = true;
				hover->Location = Point(xpos,ypos-30);
				this->Controls->Add(hover);
				 
				for(temp = b.getHead(); temp ;temp = temp->getNext()){
					Lbl = gcnew Label();
					Lbl->AutoSize = true;
					Lbl->Location = Point(xpos,ypos);
					Lbl->Text += temp->getWeight()+" lbs ";
					Lbl->BackColor = System::Drawing::Color::Black;
					 Lbl->ForeColor = System::Drawing::Color::White;
					Lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					this->Controls->Add(Lbl);
					if(xpos < 346)
						 xpos += 41;
					else{
						 xpos = 12;
						if(ypos < 700)
							 ypos += 20;
					}
					 //Sleep(1000);
				 }
				Lbl = gcnew Label();
					 Lbl->AutoSize = true;
					 Lbl->Location = Point(xpos,ypos);
					 Lbl->Text += "Overall Weight: "+b.getWeight()+" lbs ";
					 this->Controls->Add(Lbl);
			 }
			 this->menu->Visible = true;
				 
		 }
private: System::Void pileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1_Click( sender, e);
		 }
private: System::Void menu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->menu->Visible = false;
			 cancel_Click( sender, e);
			 this->Visible = false;//Close();
			 Form1 ^next = gcnew Form1();
			 next->ShowDialog();
			 this->Close();
		 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int input;
			 if(!Int32::TryParse(textBox1->Text,input) && textBox1->Text != ""){
				 MessageBox::Show("Please enter an Integer");
				 textBox1->Text = "0";
			 }
		}
		 
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 //textBox1->Text = textBox1->Text == ""? "0": textBox1->Text;
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int input;
			 if(!Int32::TryParse(textBox3->Text,input) && textBox3->Text != ""){
				 MessageBox::Show("Please enter an Integer");
				 textBox3->Text = "0";
			 }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int input;
			 if(!Int32::TryParse(textBox2->Text,input) && textBox2->Text != ""){
				 MessageBox::Show("Please enter an Integer");
				 textBox2->Text = "0";
			 }
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int input;
			 if(!Int32::TryParse(textBox4->Text,input) && textBox4->Text != ""){
				 MessageBox::Show("Please enter an Integer");
				 textBox4->Text = "0";
			 }
		 }
};
}

