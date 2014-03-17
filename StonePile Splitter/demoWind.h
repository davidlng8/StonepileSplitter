#pragma once
#include <Windows.h>
#include "StonePile.h"
#include <ctime>

namespace StonePileSplitter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for demoWind
	/// </summary>
	public ref class demoWind : public System::Windows::Forms::Form
	{
	public:
		demoWind(void)
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
		~demoWind()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(demoWind::typeid));
			this->SuspendLayout();
			// 
			// demoWind
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(494, 268);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"demoWind";
			this->Text = L"demoWind";
			this->Load += gcnew System::EventHandler(this, &demoWind::demoWind_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void demoWind_Load(System::Object^  sender, System::EventArgs^  e) {
				 int xpos = 13, ypos = 60;
				 srand(time(NULL));
				 Label ^Lbl, ^hover;
				 StonePile sp, b;
				 Stone *temp, *item, *test;
				 for(int x = 0; x < 10; x++)
					 sp.addStone(new Stone());
				 
				 sp.sort();
				 //sp.display();
				 hover = gcnew Label();
				 hover->Text = "OriginalPile:\n ";
				 hover->AutoSize = true;
				 hover->Location = Point(xpos,ypos-30);
				 this->Controls->Add(hover);
				 
				 for(temp = sp.getHead(); temp ;temp = temp->getNext()){
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
					 Lbl->Text += "Overall Weight: "+sp.getWeight()+" lbs ";
					 this->Controls->Add(Lbl);
				 /////////////////////////////////////////////
				///			Split Algorithm start		////
				temp = sp.getHead();
				int hold = 0 ,target = sp.getWeight() / 2;
				while(temp){
					if((b.getWeight() + temp->getWeight()) <= target ){
						item = temp;
						b.addStone(new Stone(temp->getWeight()));
						item = item->getNext();
						sp.remove(temp);
						temp = item;
					}
					else{
						test = temp;
						temp = temp->getNext();
					}
				}
				if(b.getWeight() < target){
					if( b.getWeight() + (2*test->getWeight()) - sp.getWeight() < sp.getWeight() - b.getWeight()){
						b.addStone(new Stone(test->getWeight()));
						sp.remove(test);
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
				 
				for(temp = sp.getHead(); temp ;temp = temp->getNext()){
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
					 Lbl->Text += "Overall Weight: "+sp.getWeight()+" lbs ";
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
	};
}
	