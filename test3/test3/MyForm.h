#include<iostream>
#include<fstream>
#include<vector>
#include<windows.h>
#include<stack>
#include<ctime>
#include"MyLib.h"
#include<math.h>
#include<string>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include<queue>
//#include<thread>

#pragma comment (lib, "ws2_32.lib")
#pragma comment (lib, "mswsock.lib")


#pragma once

namespace test3 {
	
	//#include<fstream>
	//#include<cmath>

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std;
	using namespace System::Globalization;


	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^  ReadIp;
	public: bool contin;
	private: System::Windows::Forms::Label^  IpName;
			 

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		//private: System::Windows::Forms::Button^  B_Play;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  BPlay;
	private: System::IO::FileSystemWatcher^  fileSystemWatcher1;
	private: System::Windows::Forms::Button^  BStart;
	private: System::Windows::Forms::Button^  BCreate;
	private: System::Windows::Forms::Label^  Textm;
	private: System::Windows::Forms::Label^  Testl;
	private: System::Windows::Forms::Label^  TL2;

	private: System::Windows::Forms::Button^  BExit;
	private: System::Windows::Forms::Button^  BTwoPlaers;
	private: System::Windows::Forms::Button^  BOnePlayer;
	private: System::Windows::Forms::TextBox^  Read1;
	private: System::Windows::Forms::CheckBox^  C1;
	private: System::Windows::Forms::Label^  Name3;
	private: System::Windows::Forms::Label^  Name2;
	private: System::Windows::Forms::Label^  Name1;

	private: System::Windows::Forms::Label^  TCh;
	private: System::Windows::Forms::Button^  BServer;
	private: System::Windows::Forms::Button^  BClient;
	private: System::Windows::Forms::Label^  Name4;

	private: System::Windows::Forms::Button^  BOk;
	private: System::Windows::Forms::Label^  Textb;
	private: System::Windows::Forms::Label^  TextN;
	private: System::Windows::Forms::TextBox^  Read2;

	private: System::Windows::Forms::Label^  Name5;












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
			this->BPlay = (gcnew System::Windows::Forms::Button());
			this->maze = (gcnew System::Windows::Forms::PictureBox());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->BStart = (gcnew System::Windows::Forms::Button());
			this->BCreate = (gcnew System::Windows::Forms::Button());
			this->Textm = (gcnew System::Windows::Forms::Label());
			this->Testl = (gcnew System::Windows::Forms::Label());
			this->TL2 = (gcnew System::Windows::Forms::Label());
			this->BExit = (gcnew System::Windows::Forms::Button());
			this->BOnePlayer = (gcnew System::Windows::Forms::Button());
			this->BTwoPlaers = (gcnew System::Windows::Forms::Button());
			this->Name1 = (gcnew System::Windows::Forms::Label());
			this->Name2 = (gcnew System::Windows::Forms::Label());
			this->C1 = (gcnew System::Windows::Forms::CheckBox());
			this->Name3 = (gcnew System::Windows::Forms::Label());
			this->Read1 = (gcnew System::Windows::Forms::TextBox());
			this->BOk = (gcnew System::Windows::Forms::Button());
			this->TCh = (gcnew System::Windows::Forms::Label());
			this->BClient = (gcnew System::Windows::Forms::Button());
			this->BServer = (gcnew System::Windows::Forms::Button());
			this->Name4 = (gcnew System::Windows::Forms::Label());
			this->Textb = (gcnew System::Windows::Forms::Label());
			this->TextN = (gcnew System::Windows::Forms::Label());
			this->Name5 = (gcnew System::Windows::Forms::Label());
			this->Read2 = (gcnew System::Windows::Forms::TextBox());
			this->IpName = (gcnew System::Windows::Forms::Label());
			this->ReadIp = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maze))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// BPlay
			// 
			this->BPlay->Location = System::Drawing::Point(624, 293);
			this->BPlay->Name = L"BPlay";
			this->BPlay->Size = System::Drawing::Size(100, 45);
			this->BPlay->TabIndex = 0;
			this->BPlay->Text = L"Играть!";
			this->BPlay->UseVisualStyleBackColor = true;
			this->BPlay->Click += gcnew System::EventHandler(this, &MyForm::BPlay_Click);
			this->BPlay->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::BPlay_KeyDown);
			// 
			// maze
			// 
			this->maze->BackColor = System::Drawing::SystemColors::Desktop;
			this->maze->Location = System::Drawing::Point(0, 0);
			this->maze->Name = L"maze";
			this->maze->Size = System::Drawing::Size(550, 550);
			this->maze->TabIndex = 1;
			this->maze->TabStop = false;
			this->maze->Visible = false;
			this->maze->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->maze->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::maze_Paint);
			this->maze->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &MyForm::maze_PreviewKeyDown);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// BStart
			// 
			this->BStart->Location = System::Drawing::Point(100, 200);
			this->BStart->Name = L"BStart";
			this->BStart->Size = System::Drawing::Size(100, 40);
			this->BStart->TabIndex = 2;
			this->BStart->Text = L"Старт!";
			this->BStart->UseVisualStyleBackColor = true;
			this->BStart->Click += gcnew System::EventHandler(this, &MyForm::BStart_Click);
			// 
			// BCreate
			// 
			this->BCreate->Location = System::Drawing::Point(624, 156);
			this->BCreate->Name = L"BCreate";
			this->BCreate->Size = System::Drawing::Size(100, 45);
			this->BCreate->TabIndex = 0;
			this->BCreate->Text = L"Create...";
			this->BCreate->UseVisualStyleBackColor = true;
			this->BCreate->Click += gcnew System::EventHandler(this, &MyForm::BCreate_Click);
			// 
			// Textm
			// 
			this->Textm->AutoSize = true;
			this->Textm->Location = System::Drawing::Point(633, 50);
			this->Textm->Name = L"Textm";
			this->Textm->Size = System::Drawing::Size(0, 13);
			this->Textm->TabIndex = 3;
			this->Textm->Visible = false;
			// 
			// Testl
			// 
			this->Testl->ForeColor = System::Drawing::SystemColors::Control;
			this->Testl->Location = System::Drawing::Point(804, 231);
			this->Testl->Name = L"Testl";
			this->Testl->Size = System::Drawing::Size(15, 13);
			this->Testl->TabIndex = 4;
			// 
			// TL2
			// 
			this->TL2->Location = System::Drawing::Point(872, 227);
			this->TL2->Name = L"TL2";
			this->TL2->Size = System::Drawing::Size(0, 13);
			this->TL2->TabIndex = 5;
			// 
			// BExit
			// 
			this->BExit->Location = System::Drawing::Point(624, 354);
			this->BExit->Name = L"BExit";
			this->BExit->Size = System::Drawing::Size(100, 45);
			this->BExit->TabIndex = 0;
			this->BExit->Text = L"Выход";
			this->BExit->UseVisualStyleBackColor = true;
			this->BExit->Click += gcnew System::EventHandler(this, &MyForm::BExit_Click);
			this->BExit->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::BPlay_KeyDown);
			// 
			// BOnePlayer
			// 
			this->BOnePlayer->Location = System::Drawing::Point(25, 120);
			this->BOnePlayer->Name = L"BOnePlayer";
			this->BOnePlayer->Size = System::Drawing::Size(100, 60);
			this->BOnePlayer->TabIndex = 6;
			this->BOnePlayer->Text = L"Одиночная игра";
			this->BOnePlayer->UseVisualStyleBackColor = true;
			this->BOnePlayer->Click += gcnew System::EventHandler(this, &MyForm::BOnePlayer_Click);
			// 
			// BTwoPlaers
			// 
			this->BTwoPlaers->Location = System::Drawing::Point(155, 120);
			this->BTwoPlaers->Name = L"BTwoPlaers";
			this->BTwoPlaers->Size = System::Drawing::Size(100, 60);
			this->BTwoPlaers->TabIndex = 6;
			this->BTwoPlaers->Text = L"Сетевая игра";
			this->BTwoPlaers->UseVisualStyleBackColor = true;
			this->BTwoPlaers->Click += gcnew System::EventHandler(this, &MyForm::BTwoPlaers_Click);
			// 
			// Name1
			// 
			this->Name1->AutoSize = true;
			this->Name1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name1->Location = System::Drawing::Point(22, 9);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(253, 24);
			this->Name1->TabIndex = 7;
			this->Name1->Text = L"Параметры игрового поля:";
			this->Name1->Visible = false;
			// 
			// Name2
			// 
			this->Name2->AutoSize = true;
			this->Name2->Location = System::Drawing::Point(28, 65);
			this->Name2->Name = L"Name2";
			this->Name2->Size = System::Drawing::Size(92, 13);
			this->Name2->TabIndex = 8;
			this->Name2->Text = L"Наличие циклов:";
			this->Name2->Visible = false;
			// 
			// C1
			// 
			this->C1->AutoSize = true;
			this->C1->Location = System::Drawing::Point(126, 64);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(15, 14);
			this->C1->TabIndex = 9;
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Visible = false;
			// 
			// Name3
			// 
			this->Name3->AutoSize = true;
			this->Name3->Location = System::Drawing::Point(25, 97);
			this->Name3->Name = L"Name3";
			this->Name3->Size = System::Drawing::Size(155, 13);
			this->Name3->TabIndex = 8;
			this->Name3->Text = L"Количество комнат( max: 20):";
			this->Name3->Visible = false;
			// 
			// Read1
			// 
			this->Read1->Location = System::Drawing::Point(186, 94);
			this->Read1->Name = L"Read1";
			this->Read1->Size = System::Drawing::Size(66, 20);
			this->Read1->TabIndex = 10;
			this->Read1->Visible = false;
			// 
			// BOk
			// 
			this->BOk->Location = System::Drawing::Point(100, 290);
			this->BOk->Name = L"BOk";
			this->BOk->Size = System::Drawing::Size(100, 40);
			this->BOk->TabIndex = 2;
			this->BOk->Text = L"Ok";
			this->BOk->UseVisualStyleBackColor = true;
			this->BOk->Visible = false;
			this->BOk->Click += gcnew System::EventHandler(this, &MyForm::BOk_Click);
			// 
			// TCh
			// 
			this->TCh->AutoSize = true;
			this->TCh->Location = System::Drawing::Point(627, 475);
			this->TCh->Name = L"TCh";
			this->TCh->Size = System::Drawing::Size(0, 13);
			this->TCh->TabIndex = 11;
			// 
			// BClient
			// 
			this->BClient->Location = System::Drawing::Point(25, 200);
			this->BClient->Name = L"BClient";
			this->BClient->Size = System::Drawing::Size(100, 60);
			this->BClient->TabIndex = 6;
			this->BClient->Text = L"Присоединиться к игре";
			this->BClient->UseVisualStyleBackColor = true;
			this->BClient->Visible = false;
			this->BClient->Click += gcnew System::EventHandler(this, &MyForm::BClient_Click);
			// 
			// BServer
			// 
			this->BServer->Location = System::Drawing::Point(155, 200);
			this->BServer->Name = L"BServer";
			this->BServer->Size = System::Drawing::Size(100, 60);
			this->BServer->TabIndex = 6;
			this->BServer->Text = L"Создать игру";
			this->BServer->UseVisualStyleBackColor = true;
			this->BServer->Visible = false;
			this->BServer->Click += gcnew System::EventHandler(this, &MyForm::BServer_Click);
			// 
			// Name4
			// 
			this->Name4->AutoSize = true;
			this->Name4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name4->Location = System::Drawing::Point(22, 9);
			this->Name4->Name = L"Name4";
			this->Name4->Size = System::Drawing::Size(197, 24);
			this->Name4->TabIndex = 7;
			this->Name4->Text = L"Ожидание клиента...";
			this->Name4->Visible = false;
			this->Name4->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Textb
			// 
			this->Textb->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Textb->Enabled = false;
			this->Textb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Textb->Location = System::Drawing::Point(24, 59);
			this->Textb->Name = L"Textb";
			this->Textb->Size = System::Drawing::Size(230, 94);
			this->Textb->TabIndex = 12;
			this->Textb->Visible = false;
			// 
			// TextN
			// 
			this->TextN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextN->Location = System::Drawing::Point(22, 9);
			this->TextN->Name = L"TextN";
			this->TextN->Size = System::Drawing::Size(206, 23);
			this->TextN->TabIndex = 13;
			this->TextN->Text = L"Ожидание сервера...";
			this->TextN->Visible = false;
			// 
			// Name5
			// 
			this->Name5->Location = System::Drawing::Point(26, 119);
			this->Name5->Name = L"Name5";
			this->Name5->Size = System::Drawing::Size(174, 27);
			this->Name5->TabIndex = 8;
			this->Name5->Text = L"Количество очков, требуемых для победы(max 30):";
			this->Name5->Visible = false;
			// 
			// Read2
			// 
			this->Read2->Location = System::Drawing::Point(206, 123);
			this->Read2->Name = L"Read2";
			this->Read2->Size = System::Drawing::Size(66, 20);
			this->Read2->TabIndex = 10;
			this->Read2->Visible = false;
			// 
			// IpName
			// 
			this->IpName->AutoSize = true;
			this->IpName->Location = System::Drawing::Point(25, 263);
			this->IpName->Name = L"IpName";
			this->IpName->Size = System::Drawing::Size(161, 13);
			this->IpName->TabIndex = 8;
			this->IpName->Text = L"IP-адресс сервера 192.168.43.";
			this->IpName->Visible = false;
			// 
			// ReadIp
			// 
			this->ReadIp->Location = System::Drawing::Point(192, 260);
			this->ReadIp->Name = L"ReadIp";
			this->ReadIp->Size = System::Drawing::Size(66, 20);
			this->ReadIp->TabIndex = 10;
			this->ReadIp->Visible = false;
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(827, 361);
			this->Controls->Add(this->TextN);
			this->Controls->Add(this->Textb);
			this->Controls->Add(this->TCh);
			this->Controls->Add(this->Read2);
			this->Controls->Add(this->ReadIp);
			this->Controls->Add(this->Read1);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->IpName);
			this->Controls->Add(this->Name5);
			this->Controls->Add(this->Name3);
			this->Controls->Add(this->Name2);
			this->Controls->Add(this->Name4);
			this->Controls->Add(this->Name1);
			this->Controls->Add(this->BServer);
			this->Controls->Add(this->BClient);
			this->Controls->Add(this->BTwoPlaers);
			this->Controls->Add(this->BOnePlayer);
			this->Controls->Add(this->TL2);
			this->Controls->Add(this->Testl);
			this->Controls->Add(this->Textm);
			this->Controls->Add(this->BOk);
			this->Controls->Add(this->BStart);
			this->Controls->Add(this->maze);
			this->Controls->Add(this->BCreate);
			this->Controls->Add(this->BExit);
			this->Controls->Add(this->BPlay);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maze))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Threading::Thread^ GW;
		private: System::Threading::Thread^ DP;
		private: System::Threading::Thread^ Waitpl;
		private: System::Threading::Thread^ CLWork;
		private: System::Threading::Thread^ ClientWait;
		private: System::Threading::Thread^ ServerWait;
		private: System::Windows::Forms::PictureBox^  maze;
		private: int **pole;
		private: Snake * p1, *p2;
#pragma endregion	 
		bool f = false;
		Graphics^ gr;
		pos* s1;
		bool game = false;
		Fruit* fr;
		bool GameSettings = false; // f = 1, t = 2;
		int Sn, Cn;
		int Ss, Cs;
		queue<pos> *sp;
		queue<pos> *cp;
		int fe;
		pos *fp;
		char *Sinf, *Cinf;
		void ServW() {
			pos n;
			for (;true;) {
				//if (Sinf[0] == 99) {
					if (recv(Client, Sinf, 8, 0) != SOCKET_ERROR) {
						//if (Sinf[0] != '\0') {
							n.x = Sinf[0];
							n.y = Sinf[1];
							Sn = Sinf[2];
							Ss = Sinf[3];
							if (Sinf[4] != -1 && fp->x == -1 && fp->y == -1) {
								fe = Sinf[4];


								fp->x = Sinf[5];
								fp->y = Sinf[6];
							}
							p2w = Sinf[7];
							if (!sp->empty()) {
								if (sp->back().x != n.x || sp->back().y != n.y) {
									sp->push(n);
								}
							}
							else {
								sp->push(n);
							}
						//}
					//	break;
					}
				//}
			}
		}
		void ClietW() {
			pos n;
			for (;true;) {
				//if (Cinf[0] == 99 || Cinf[0] == 100) {
					if (recv(Sock, Cinf, 8, 0) != SOCKET_ERROR) {
						n.x = Cinf[0];
						n.y = Cinf[1];
						Cn = Cinf[2];
						Cs = Cinf[3];
						if (Cinf[4] != -1 && fp->x == -1 && fp->y == -1) {
							fe = Cinf[4];
						
						
							fp->x = Cinf[5];
							fp->y = Cinf[6];
						}
						p2w = Cinf[7];
						if (!cp->empty()) {
							if (cp->back().x != n.x || cp->back().y != n.y) {
								cp->push(n);
							}
						}
						else {
							cp->push(n);
						}
						//break;
					}
				//}
			}
		}
		bool p2w = false;
		public: void StartGame() {

			sp = new queue<pos>;
			cp = new queue<pos>;
			fe = -1;
			fp = new pos();
			fp->x = -1;
			fp->y = -1;
			int fe1 = -1;
			if (ClientStart) {
				char fd[2];
				fd[0] = 1;
				fd[1] = 2;
				//send(Sock, fd, 2, 0);
			}
			if (fr == NULL) {
				fr = new Fruit[3];
			}
			for (int i = 0; i < 3; i++) {
				bool c = true;
				for (; c;) {
					fr[i].SetX(rand() % 51+2);
					fr[i].SetY(rand() % 51+2);
					if (pole[fr[i].GetX()][fr[i].GetY()] == 1 || pole[fr[i].GetX()][fr[i].GetY()] == 5) {
						pole[fr[i].GetX()][fr[i].GetY()] = 4;
						c = false;
					}

				}
			}
			Sinf = new char[8];
			Sinf[0] = 100;
			Cinf = new char[8];
			Cinf[0] = 100;
			//System::Windows::Forms::KeyEventArgs^  e
			for (; game;) {
				
			if (this->InvokeRequired) {
				this->Invoke(gcnew Action(this, &MyForm::DrawPole));
			}
			else {
				DrawPole(); 
			}
			
			//srand(time(0));
			//int t = p1->Go(pole[p1->GetNB().x][p1->GetNB().y]);
			
			if (p1->Go(pole[p1->GetNB().x][p1->GetNB().y]) == 1) {
				int kx = p1->GetNB().x;
				int ky = p1->GetNB().y;
				
				for (int i = 0; i < 3; i++) {
					if (fr[i].GetX() == kx && ky == fr[i].GetY()) {
						pole[fr[i].GetX()][fr[i].GetY()] = 1;
						bool c = true;
						fe1 = i;
						for (; c;) {
							fr[i].SetX(rand() % 51 + 2);
							fr[i].SetY(rand() % 51 + 2);
							if (pole[fr[i].GetX()][fr[i].GetY()] == 1 || pole[fr[i].GetX()][fr[i].GetY()] == 5) {
								pole[fr[i].GetX()][fr[i].GetY()] = 4;
								c = false;
							}
						}
						break;

					}
				}
			}
			//fp->x = fr[fe].GetX();
			//fp->y = fr[fe].GetY();
			if (pscore == p1->GetSize() - 5 || p2w == true) {
				p2w = true;
				if (this->InvokeRequired) {
					this->Invoke(gcnew Action(this, &MyForm::Ext));
				}
				else {
					Ext();
				}
			}
			if (ServerStart) {
				char kn[8];
				kn[0] = p1->GetX();
				kn[1] = p1->GetY();
				kn[2] = p1->GetNapr();
				kn[3] = p1->GetSize();
				kn[4] = fe1;
				if (fe1 != -1) {
					kn[5] = fr[fe1].GetX();
					kn[6] = fr[fe1].GetY();
				}
				else {
					kn[5] = -1;
					kn[6] = -1;
				}
				kn[7] = p2w;
				send(Client, kn, 8, 0);
				fe1 = -1;
				if (Sinf[0] == 100) {
					if(!ServerWait->IsAlive) {
						ServerWait->Start();
					}
				}
				if (!sp->empty()) {
					p2->run(pole[p2->tryGeetNB(Sn).x][p2->tryGeetNB(Sn).y]);
					p2->SetSize(Ss);
					p2->SetX(sp->back().x);
					p2->SetY(sp->back().y);
					sp->pop();
					
				}
				if (fe >= 0 && fe <= 2) {
					if (fp->x != -1 && fp->y != -1) {
						pole[fr[fe].GetX()][fr[fe].GetY()] = 1;
						cout << "wsdgfhg";
						fr[fe].SetX(fp->x);
						fr[fe].SetY(fp->y);
						pole[fr[fe].GetX()][fr[fe].GetY()] = 4;
						fe = -1;
						fp->x = -1;
						fp->y = -1;
					}
				}
			}

			if (ClientStart) {
				char kn[8];
				kn[0] = p1->GetX();
				kn[1] = p1->GetY();
				kn[2] = p1->GetNapr();
				kn[3] = p1->GetSize();
				kn[4] = fe1;
				if (fe1 != -1) {
					kn[5] = fr[fe1].GetX();
					kn[6] = fr[fe1].GetY();
				}
				else {
					kn[5] = -1;
					kn[6] =-1;
				}
				kn[7] = p2w;
				send(Sock, kn, 8, 0);
				fe1 = -1;
				if (Cinf[0] == 100) {
					if (!ClientWait->IsAlive) {
						ClientWait->Start();
					}
				}
				if (!cp->empty()) {
					p2->run(pole[p2->tryGeetNB(Cn).x][p2->tryGeetNB(Cn).y]);
					p2->SetSize(Cs);
					p2->SetX(cp->back().x);
					p2->SetY(cp->back().y);
					cp->pop();
				}
				if (fe >= 0 && fe<=2) {
					if (fp->x != -1 && fp->y != -1) {
						pole[fr[fe].GetX()][fr[fe].GetY()] = 1;
						cout << "wsdgfhg";
						fr[fe].SetX(fp->x);
						fr[fe].SetY(fp->y);
						pole[fr[fe].GetX()][fr[fe].GetY()] = 4;
						fe = -1;
					}
				}
				
			}
			if (this->InvokeRequired) {
				this->Invoke(gcnew Action(this, &MyForm::Showr));
			}
			else {
				Showr();
			}
			
			
			
				Sleep(100);


			}

		}
				void Showr() {
					TCh->Text = "Очки: " + (p1->GetSize()-5).ToString()+" из " + pscore.ToString();
				}
		public: void DrawPole() {
			maze->Refresh();
		}
			
	private: System::Void BPlay_Click(System::Object^  sender, System::EventArgs^  e) {
		
		game = true;
		p1 = new Snake(2, 0);
		GW->Start();
			if (ServerStart) {
				send(Client, "s", 1, 0);
				p2 = new Snake(52, 54, 0);
				
			}
			BPlay->Visible = false;
		//Thread

		//int k = Testl->Size.Width;
		//k= (k + 1) % 20;
		//this->Testl->Size = System::Drawing::Size(k, 13);
		//k = Testl->Size.Width;
		
		//thread thr(StartGame);
		//Thread thr(StartGame);
		//BackgroundTest^ longTest = gcnew BackgroundTest(50);
		//MyForm^ mf = this;
		//mf->maze = this->maze;
		//Thread^ thr = gcnew Thread(gcnew ThreadStart(mf,&MyForm::StartGame));
		//thr->IsBackground = true;
		//thr->Start();
		//StartGame();

	}
			 void Ext() {
				 
				 if (ServerStart) {
					 closesocket(Sock);
					 closesocket(Client);
					 WSACleanup();
				 }
				 if (ClientStart) {
					 closesocket(Sock);
					 WSACleanup();
				 }
				 contin = true;
				 Application::Exit();
	}
	private: System::Void BExit_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if(ServerStart){
			closesocket(Sock);
			closesocket(Client);
			WSACleanup();
		}
		if(ClientStart){
			closesocket(Sock);
			WSACleanup();
		}
		contin = false;
		Application::Exit();
			
	}

	



	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	}

			 //



	
	bool s = false;
	//bool f1 = false;
	///pos* ns;
	private: System::Void maze_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		//if (f) {
		//	SolidBrush^ bw = gcnew SolidBrush(Color::White);
		//	e->Graphics->FillRectangle(bw, ns[0].x * 10, ns[0].y * 10, 10, 10);
		//	e->Graphics->FillRectangle(bw, ns[1].x * 10, ns[1].y * 10, 10, 10);
		//	delete(bw);
		//}
		if (f) {
			//std::ifstream fin("output3.txt");
			int k;
			if (pole == NULL) {
				s = true;
			}
			else {
				s = false;
			}
			SolidBrush^ bw = gcnew SolidBrush(Color::White);
			SolidBrush^ bb = gcnew SolidBrush(Color::Black);
			//SolidBrush^ bbr = gcnew SolidBrush(Color::Red);
			if (s) {
				pole = new int*[55];
				//p.r
			}
			for (int i = 0; i < 55; i++) {
				if (s) {
					pole[i] = new int[55];
				}
				for (int j = 0; j < 55; j++) {
					//fin >> k;
					//pole[i][j] = k;
					k = pole[i][j];
					//Rectangle rect = Rectangle();
					//for (int i = 0; i < 100; i++) {
					if (k == 1 || k == 3 ) {
						e->Graphics->FillRectangle(bw, i * 10, j * 10, 10, 10);
					}
					else if (k == 5) {
							e->Graphics->FillRectangle(bw, i * 10, j * 10, 10, 10);
					} else {
						e->Graphics->FillRectangle(bb, i * 10, j * 10, 10, 10);
					}


				}
			}
			s = false;
			//}
			//sleep();
			delete(bw);
			delete(bb);
			//delete(bbr);
		}
		if (game) {
			int k;
			//p1 = new Snake(2, 0);
			SolidBrush^ bw = gcnew SolidBrush(Color::White);
			SolidBrush^ bb = gcnew SolidBrush(Color::Black);
			SolidBrush^ bg = gcnew SolidBrush(Color::Green);
			for (int i = 0; i < 55; i++) {
				for (int j = 0; j < 55; j++) {
					k = pole[i][j];
					if (k == 1 || k == 3 || k == 5) {
						e->Graphics->FillRectangle(bw, i * 10, j * 10, 10, 10);
						pole[i][j] = 1;
					}
					else if (k == 4) {
						e->Graphics->FillRectangle(bg, i * 10, j * 10, 10, 10);
					}
					else {
						e->Graphics->FillRectangle(bb, i * 10, j * 10, 10, 10);
					}


				}
			}
			delete(bg);
			delete(bw);
			delete(bb);

			SolidBrush^ bo = gcnew SolidBrush(Color::Orange);
			SolidBrush^ br = gcnew SolidBrush(Color::Red);
			SolidBrush^ bbl = gcnew SolidBrush(Color::Blue);
			

			for (int i = 0; i < p1->GetSize(); i++) {
				e->Graphics->FillRectangle(br, p1->GetSell(i).x * 10, p1->GetSell(i).y * 10, 10, 10);
			}
			if (ServerStart || ClientStart) {
				for (int i = 0; i < p2->GetSize(); i++) {
					e->Graphics->FillRectangle(bbl, p2->GetSell(i).x * 10, p2->GetSell(i).y * 10, 10, 10);
				}
				e->Graphics->FillRectangle(bo, p2->GetX() * 10, p2->GetY() * 10, 10, 10);
			}
			e->Graphics->FillRectangle(bo, p1->GetX() * 10, p1->GetY() * 10, 10, 10);
			
			delete(bo);
			delete(br);
			delete(bbl);

		}

	}
	private: System::Void BStart_Click(System::Object^  sender, System::EventArgs^  e) {

		BStart->Visible = false;
		BOnePlayer->Visible = true;
		BTwoPlaers->Visible = true;

		
		//BPlay->Visible = true;
		//maze->Visible = true;
		//this->Size.Width = 776;
		//this->Size.Height = 590;
		//this->ClientSize = System::Drawing::Size(760, 551);


	}
	
private: System::Void BOnePlayer_Click(System::Object^  sender, System::EventArgs^  e) {

	BOnePlayer->Visible = false;
	BTwoPlaers->Visible = false;

	Name1->Visible = true;
	Name2->Visible = true;
	Name3->Visible = true;

	BOk->Visible = true;
	C1->Visible = true;
	Read1->Visible = true;
	GameSettings = false;

	Name5->Visible = true;
	Read2->Visible = true;
	//st = true;

	//
	

}


private: System::Void BTwoPlaers_Click(System::Object^  sender, System::EventArgs^  e) {

	

	/*char PCName[30], ClientName[30], Message[200];
	WSAData WSADat; // Свойства WinSock (результат функции WSAStartup)
	sockaddr_in sin; // Свойства(адрес) создаваемого сокета
	SOCKET Sock, Client; // Серверный и клиентский сокеты

	WSAStartup(0x0202, &WSADat); // Инициализация WinSock

	gethostname(PCName, 30);

	sin.sin_family = AF_INET; // Тип адреса
	sin.sin_addr.s_addr = inet_addr("192.168.43.115");  // IP-адрес сервера (пори создании сервера можно 0)
	sin.sin_port = htons(2803); // Номер порта сервера
	Sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // Создание сокета
	bind(Sock, (sockaddr*)&sin, sizeof(sin)); // Связывание созданного сокета с адресом sin*/




	
	BOnePlayer->Visible = false;
	BTwoPlaers->Visible = false;

	BServer->Visible = true;
	BClient->Visible = true;

	/*
	Name1->Visible = true;
	Name2->Visible = true;
	Name3->Visible = true;

	BOk->Visible = true;
	C1->Visible = true;
	Read1->Visible = true;
	GameSettings = true;;
	*/




}
		 char  *PCName, *ClientName, *Message;
		 SOCKET Sock, Client;
		 void Waitserv() { // Server
			//dff[30] = {  };
			 WSAData WSADat; // Свойства WinSock (результат функции WSAStartup)
			 sockaddr_in sin; // Свойства(адрес) создаваемого сокета
			// SOCKET Sock, Client; // Серверный и клиентский сокеты

			 WSAStartup(0x0202, &WSADat); // Инициализация WinSock

			 gethostname(PCName, 30);

			 sin.sin_family = AF_INET; // Тип адреса
			 sin.sin_addr.s_addr = 0;//inet_addr("192.168.43.115");  // IP-адрес сервера (пори создании сервера можно 0)
			 sin.sin_port = htons(2803); // Номер порта сервера
			 Sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); // Создание сокета
			 bind(Sock, (sockaddr*)&sin, sizeof(sin)); // Связывание созданного сокета с адресом sin

			 listen(Sock, SOMAXCONN); // Прослушивание сокета сервером (для подключения клиента)
			 Client = accept(Sock, (sockaddr*)&sin, 0); // Ожидание клиента
			 recv(Client, ClientName, 30, 0); // Получение имени компьютера клиента
			 send(Client, PCName, strlen(PCName) + 1, 0); // Отправка имени этого компьютера (сервера)

			 if (this->InvokeRequired) {
				 this->Invoke(gcnew Action(this, &MyForm::Showplayers));
			 }
			 else {
				 Showplayers();
			 }
		 }

		void Showplayers() {

			wchar_t *cs = new wchar_t[strlen(ClientName)];

			//strcpy(cs, s);
			Textb->Text += L"1. Имя игрока: ";
			for (int i = 0;i < strlen(ClientName);i++) {
				cs[i] = ClientName[i];
				// Textb->Text = L"" + Textb->Text + s[i];
				Textb->Text += L"" + cs[i];
			}

			//Textb->Text = "1. Имя игрока: " + *ClientName;
			Textb->Visible = true;
			BOk->Visible = true;
			st = true;
		 }
private: System::Void BServer_Click(System::Object^  sender, System::EventArgs^  e) {

	Name4->Visible = true;


	BServer->Visible = false;
	BClient->Visible = false;


	//Textb->Visible = true;
	

	PCName = new char[30];
	ClientName = new char[30];
	Message = new char[200];
	//Textb->Visible 
	Waitpl->Start();

	
	//dff = ;
	
	//
	//
}

		 bool gk = false;
		bool ClientStart = false;
		 void con(){
			 for (;!gk;) {
				 if (Ipr) {
					 gk = true;
					 char PCName[30], ServerName[30], Message[200], IP[17] = { "192.168.43." };
					 WSAData WSADat; // Свойства WinSock (результат функции WSAStartup)
					 sockaddr_in sin; // Свойства(адрес) создаваемого сокета
		//SOCKET Sock; // Клиентский сокет
								  //printf("%s", IP);
								  // Ввод IP-адреса сервера
								  //cout << "Enter server's IP: ";
								  //cin.getline(IP, 16);
					 for (int i = 0;i<3;i++) {
						 IP[11 + i] = dip[i];
						 IP[12 + i] = '\0';
					 }
					 WSAStartup(0x0202, &WSADat); // Инициализация WinSock
												  // 0x0202 - версия WinSock. Может быть 1.0, 1.1, 2.0, 2.2
												  // WSADat - структура, куда будут занесены рез. инициализации
					 gethostname(PCName, 30); // Получение имени текущего ПК

					 sin.sin_family = AF_INET; // Тип адреса
					 sin.sin_addr.s_addr = inet_addr(IP); // IP-адрес сервера (пори создании сервера можно 0)
					 sin.sin_port = htons(2803); // Номер порта сервера


					 Sock = socket(AF_INET, SOCK_STREAM, 0); // Создание сокета
					 //cout << Sock<<'\n'<<AF_INET;

					 //sin.sin_addr.S_un.S_addr = INADDR_LOOPBACK;
					 //INADDR_// ***** Подключение к серверу

					 //cout << "Connecting to server..." << endl;
					 bool er = true;									 //sin.sin_addr.s_addr = inet_addr(IP + '0');
					 SN = new char[0];
					 // UCHAR r =  sin.sin_addr.S_un.S_un_b.s_b4;


					 if (connect(Sock, (sockaddr*)&sin, sizeof(sin)) == SOCKET_ERROR) {
						 //	 cout << "sdffghjk";
						 Ipr = false;
					 }
					 else {
						 gk = true;
						 send(Sock, PCName, strlen(PCName) + 1, 0); // Отправка имени этого компьютера (клиента)
						 recv(Sock, ServerName, 30, 0); // Получение имени компьютера сервера
						 strcpy(SN, ServerName);
						 if (this->InvokeRequired) {
							 this->Invoke(gcnew Action(this, &MyForm::startClient));
						 }
						 else {
							 startClient();
						 }
					 }
					 char k[2];
					 for (;true;) {
						 if (recv(Sock, k, 2, 0) != SOCKET_ERROR) {
							 if (k[0] == 'o' && k[1] == '-') {
								 if (this->InvokeRequired) {
									 this->Invoke(gcnew Action(this, &MyForm::closeW));
								 }
								 else {
									 closeW();
								 }
								 drawClient();
								 ClientStart = true;
								 break;
							 }
							 if (k[0] == 'w') {
								 pscore = k[1];
							 }
						 }

					 }
					 char l[1];
					 for (;true;) {
						 if (recv(Sock, l, 1, 0) != SOCKET_ERROR) {
							 if (l[0] == 's') {
								 p1 = new Snake(52, 54, 0);
								 p2 = new Snake(2, 0);
								 game = true;
								 GW->Start();
								 break;
							 }
						 }
					 }
					 //for (int i = 0;i < 256;i++) {
						// //itoa(i,)
						// itoa(i, s, 10);
						// strcat(IP, s);
						// sin.sin_addr.s_addr = inet_addr(IP);
						// if (connect(Sock, (sockaddr*)&sin, sizeof(sin)) != SOCKET_ERROR) {
						//	 er = false;
						//	 break;
						//	 //cout << "Connection error!" << endl;
						//	 //goto End;
						// }
					 //}
					 //if (!er) {

				 }
			 }
		 }
		 char *SN;
		 void startClient() {
			 //char *s;
			 //s = new char[3];
			// strcpy(s, "1. Имя игрока: ");
			// strcat(s, SN);
			 ///string st = s;
			// int k = strlen(s);
			 wchar_t *cs = new wchar_t[strlen(SN)];
			 
			 //strcpy(cs, s);
			 Textb->Text += L"1. Имя игрока: ";
			 for (int i = 0;i < strlen(SN);i++) {
				 cs[i] = SN[i];
				// Textb->Text = L"" + Textb->Text + s[i];
				 Textb->Text += L"" + cs[i];
			 }
			 
			 Textb->Visible = true;




			 //BOk->Visible = true;
		 }
		 void closeW() {
			 //BPlay->Visible = true;
			 maze->Visible = true;
			 this->ClientSize = System::Drawing::Size(760, 551);

			 BOnePlayer->Visible = false;
			 BTwoPlaers->Visible = false;

			 Name1->Visible = false;
			 Name2->Visible = false;
			 Name3->Visible = false;
			 Name4->Visible = false;

			 BOk->Visible = false;
			 C1->Visible = false;
			 Read1->Visible = false;
			 BCreate->Visible = false;
			 BPlay->Visible = false;

			 Textb->Visible = false;
			 TextN->Visible = false;

			 IpName->Visible = false;
			 ReadIp->Visible = false;
		 }

		 void drawClient() {
			// if (ClientStart) {
			 if (pole == NULL) {
				 pole = new int*[55];
				 for (int i = 0; i < 55; i++) {

					 pole[i] = new int[55];
					 for (int j = 0; j < 55; j++) {
						 pole[i][j] = 0;
					 }
				 }
				 for (int i = 0; i<55; i++) {
					 pole[0][i] = 2;
					 pole[1][i] = 2;
					 pole[53][i] = 2;
					 pole[54][i] = 2;
					 pole[i][0] = 2;
					 pole[i][1] = 2;
					 pole[i][53] = 2;
					 pole[i][54] = 2;
				 }
			 }
			 /// (ns == NULL) {
			 //	ns = new pos[2];
			 //}
			 srand(time(0));
			 //f = true;
			 bool fr = false;
				 char kc[4];
				 for (;true;) {
					 if (recv(Sock, kc, 4, 0) != SOCKET_ERROR) {
						 if (!fr) {

							 if (kc[0] == 127) {
								 fr = true;
							 }
							 else {
								 for (int i = kc[0];i < kc[2];i++) {
									 for (int j = kc[1];j < kc[3];j++) {
										 pole[i][j] = 1;
									 }
								 }
							 }
						 }
						 if (fr) {
							 if (kc[0] == 100) {
								 //DP->Start()
								 break;
							 }
							 if (kc[0] != 127) {
								 pole[kc[0]][kc[1]] = 1;
								 pole[kc[2]][kc[3]] = 1;
								 f = true;
							 }
						 }
							 // maze->Refresh();
							 if (this->InvokeRequired) {
								 this->Invoke(gcnew Action(this, &MyForm::DrawPole));
							 }
							 else {
								 DrawPole();
							 }
						 
						 f = false;
					 }

				 }
				 char df[2];
				 df[0] = 'o';
				 df[1] = 'k';
				 send(Sock, df, 2, 0);
			 //}
			// else
		 }
private: System::Void BClient_Click(System::Object^  sender, System::EventArgs^  e) {
	Name4->Visible = true;
	TextN->Visible = true;
	BClient->Visible = false;
	BServer->Visible = false;
	BOk->Visible = true;
	ReadIp->Visible = true;
	IpName->Visible = true;
	ClientStart = true;
	//WaitServer->Visible = true;
	//con();
	CLWork->Start();

	//cout << "Connected to " << ServerName << endl;
}

		 bool st = false;

		 bool ServerStart = false;
		 int pscore;
		// String lip;
		 bool Ipr = false;
		 char *dip;
	private: System::Void BOk_Click(System::Object^  sender, System::EventArgs^  e) {
		//if (!GameSettings) {
		
		//}
		if (st) {

			Name1->Visible = true;
			Name2->Visible = true;
			Name3->Visible = true;

			BOk->Visible = true;
			C1->Visible = true;
			Read1->Visible = true;
			GameSettings = true;

			Textb->Visible = false;
			Name4->Visible = false;

			Name5->Visible = true;
			Read2->Visible = true;


			st = false;
			ServerStart = true;
		}
		else if (ServerStart){
			Crcl = C1->Checked;
		String^ st = (Read1->Text);
		if (st == "") {
			room == 0;
		}else
		if (st->Length <= 2) {
			if (st->Length == 1) {
				room = st[0] - '0';
			}
			else
				room = 10 * (st[0] - '0') + st[1] - '0';
			if (room > 20) {
				room = 0;
			}
		}
	    st = (Read2->Text);
		if (st == "") {
			pscore = rand() % 21 + 10;
		}
		else if (st->Length == 1) {
			pscore = st[0] - '0';
		} 
		else if (st->Length == 2) {
			pscore = 10 * (st[0] - '0') + st[1] - '0';
		}

		//room = stoi(&st, 2, 10);
		BPlay->Visible = true;
		maze->Visible = true;
		this->ClientSize = System::Drawing::Size(760, 551);

		BOnePlayer->Visible = false;
		BTwoPlaers->Visible = false;

		Name1->Visible = false;
		Name2->Visible = false;
		Name3->Visible = false;

		BOk->Visible = false;
		C1->Visible = false;
		Read1->Visible = false;
		BCreate->Visible = false;
		BPlay->Visible = false;
		Name5->Visible = false;
		Read2->Visible = false;
		char po[2];
		po[0] = 'w';
		po[1] = pscore;
		send(Client, po, 2, 0);
		send(Client, "o-", 2, 0);

		DP->Start();
		
		}
		else if (ClientStart && !Ipr && !gk) {
			dip = new char[3];
			//for (;!Ipr;) {
			String^ stdi =  ReadIp->Text;
			
				int h = 0;
				for (int i = 0;i < 3;i++) {
					dip[i] = '0';
				}
				if (stdi->Length == 1) {
					dip[1] = 0;

				}if (stdi->Length == 2) {
					dip[1] = 0;
					dip[2] = 0;

				}
				for (int i = 0;i <stdi->Length;i++) {
					h = h * 10 + (stdi[i]-'0');
					dip[i] = stdi[i];

					//strcpy(dip, stdi->ToCharArray);
				}
				
				//if (0 <= h && h <= 255) {
					Ipr = true;

				//}
			//	IpName->Visible = false;
			//	ReadIp->Visible = false;
					if (Ipr == true) {
						BOk->Visible = false;
					}
					else {
						BOk->Visible = true;;
					}
			//}
		}
		else{
			Crcl = C1->Checked;
			String^ st = (Read1->Text);
			if (st->Length <= 2) {
				if (st->Length == 1) {
					room = st[0] - '0';
				} else if(st->Length == 0){
					room = 0;
				}
				else {
					room = 10 * (st[0] - '0') + st[1] - '0';
					if (room > 20) {
						room = 10;
					}
				}
			}
			st = (Read2->Text);
			if (st == "") {
				srand(time(0));
				pscore = rand() % 21 + 10;
			}
			else if (st->Length == 1) {
				pscore = st[0] - '0';
			}
			else if (st->Length == 2) {
				pscore = 10 * (st[0] - '0') + st[1] - '0';
			}
			//room = stoi(&st, 2, 10);
			BPlay->Visible = true;
			maze->Visible = true;
			this->ClientSize = System::Drawing::Size(760, 551);

			BOnePlayer->Visible = false;
			BTwoPlaers->Visible = false;

			Name1->Visible = false;
			Name2->Visible = false;
			Name3->Visible = false;

			BOk->Visible = false;
			C1->Visible = false;
			Read1->Visible = false;
			BCreate->Visible = false;
			BPlay->Visible = false;

			Name5->Visible = false;
			Read2->Visible = false;
			

			DP->Start();
		}

	}
			 pos *r;
			 void drawmaze() {
				 drawroom();
				 char m1[4];
				 stack<pos> p;
				 bool b;
				 pos n;
				 n.x = 2;
				 n.y = 2;
					 pole[2][0] = 1;
					 pole[2][1] = 1;
					 pole[2][2] = 1;
					 if (ServerStart) {
						 m1[0] = 2;
						 m1[1] = 0;
						 m1[2] = 2;
						 m1[3] = 1;
						 send(Client, m1, 4, 0);
						 m1[0] = 2;
						 m1[1] = 2;
						 send(Client, m1, 4, 0);
					 }
				 p.push(n);
				 int k, l;
				 for (;;) {
					 n = p.top();
					 //p.pop();
					 if (this->InvokeRequired) {
						 this->Invoke(gcnew Action(this, &MyForm::DrawPole));
					 }
					 else {
						 DrawPole();
					 }
					 //maze->Refresh();
					 //Sleep(5);
					 bool rb = false;
					 if (pole[n.x][n.y + 2] == 0 || pole[n.x][n.y - 2] == 0 || pole[n.x + 2][n.y] == 0 || pole[n.x - 2][n.y] == 0) {
						 for (;;) {
							 b = false;
							 k = rand() % 4;
							 if (Crcl == true) {
								 l = rand() % 2;
							 }else l = 0;
							 if (pole[n.x][n.y + 2] == 3 || pole[n.x][n.y - 2] == 3 || pole[n.x - 2][n.y] == 3 || pole[n.x + 2][n.y] == 3) {
								 rb = true;
							 }
							 if (k == 0) {
								 if ((pole[n.x][n.y + 2] == 0 || l !=0 ||  pole[n.x][n.y + 2] == 3) && pole[n.x][n.y + 2]  !=2 && pole[n.x][n.y + 2] != 5) {


									 if (pole[n.x][n.y + 2] == 3) {
										 int b;
										 for (int i = 0;i < room;i++) {
											 //cout << r[i * 2].x << ' ' << r[i * 2].y << ' ' << r[i * 2 + 1].x << ' ' << r[i * 2 + 1].y<<'\n';
											 if (r[i * 2].x <= n.x && n.x < r[i * 2 + 1].x && r[i * 2].y <= n.y+2 && n.y+2 < r[i * 2 + 1].y) {
												 b = i;
												 break;
											 }
										 }
										 
											 for (int i = r[b * 2].x;i < r[b * 2 + 1].x;i++) {
												 for (int j = r[b * 2].y;j < r[b * 2 + 1].y;j++) {
													 pole[i][j] = 5;
												 }
											 }
											 pole[n.x][n.y + 2] = 5;
											 pole[n.x][n.y + 1] = 1;
											 if (ServerStart) {
												 m1[0] = n.x;
												 m1[1] = n.y + 2;
												 m1[2] = n.x;
												 m1[3] = n.y + 1;
												 send(Client, m1, 4, 0);
											 }
											 rb = false;
									 }
									 else if(!rb) {
										 pole[n.x][n.y + 2] = 1;
										 pole[n.x][n.y + 1] = 1;
										 n.y += 2;
										 b = true;
										 p.push(n);

										 if (ServerStart) {
											 m1[0] = n.x;
											 m1[1] = n.y;
											 m1[2] = n.x;
											 m1[3] = n.y - 1;
											 send(Client, m1, 4, 0);
										 }
									 }
									// ns[0].x = n.x; ns[1].x = n.x;
									// //ns[0].y = n.y+2; ns[1].y = n.y+1;
									// n.y += 2;
									 b = true;
								 }
							 }
							 else if (k == 1) {
								 if ((pole[n.x + 2][n.y] == 3 || pole[n.x + 2][n.y] == 0 || l != 0) && pole[n.x + 2][n.y]  !=2 && pole[n.x+2][n.y] != 5) {
									 if (pole[n.x+2][n.y] == 3) {
										 int b;
										 for (int i = 0;i < room;i++) {
											 if (r[i * 2].x <= n.x+2 && n.x+2 <= r[i * 2 + 1].x && r[i * 2].y <= n.y && n.y <= r[i * 2 + 1].y) {
												 b = i;
												 break;
											 }
										 }

										 for (int i = r[b * 2].x;i < r[b * 2 + 1].x;i++) {
											 for (int j = r[b * 2].y;j < r[b * 2 + 1].y;j++) {
												 pole[i][j] = 5;
											 }
										 }
										 pole[n.x+2][n.y] = 5;
										 pole[n.x+1][n.y] = 1;

										 if (ServerStart) {
											 m1[0] = n.x + 2;
											 m1[1] = n.y;
											 m1[2] = n.x + 1;
											 m1[3] = n.y;
											 send(Client, m1, 4, 0);
										 }
										 rb = false;
									 }
									 else if(!rb) {
										 pole[n.x + 2][n.y] = 1;
										 pole[n.x + 1][n.y] = 1;
										 n.x += 2;
										 b = true;
										 p.push(n);


										 if (ServerStart) {
											 m1[0] = n.x;
											 m1[1] = n.y;
											 m1[2] = n.x - 1;
											 m1[3] = n.y;
											 send(Client, m1, 4, 0);
										 }
									 }
									// ns[0].x = n.x+2; ns[1].x = n.x+1;
									// ns[0].y = n.y ; ns[1].y = n.y ;
									//n.x += 2;
									 b = true; 
								 }
							 }
							 else if (k == 2) {
								 if ((pole[n.x][n.y - 2] == 3 || pole[n.x][n.y - 2] == 0 || l != 0) && pole[n.x][n.y - 2]  !=2 && pole[n.x][n.y - 2] != 5) {
									 if (pole[n.x][n.y - 2] == 3) {
										 int b;
										 for (int i = 0;i < room;i++) {
											 if (r[i * 2].x <= n.x && n.x <= r[i * 2 + 1].x && r[i * 2].y <= n.y-2 && n.y-2 <= r[i * 2 + 1].y) {
												 b = i;
												 break;
											 }
										 }

										 for (int i = r[b * 2].x;i < r[b * 2 + 1].x;i++) {
											 for (int j = r[b * 2].y;j < r[b * 2 + 1].y;j++) {
												 pole[i][j] = 5;
											 }
										 }
										 pole[n.x][n.y - 2] = 5;
										 pole[n.x][n.y - 1] = 1;
										 if (ServerStart) {
											 m1[0] = n.x;
											 m1[1] = n.y - 2;
											 m1[2] = n.x;
											 m1[3] = n.y - 1;
											 send(Client, m1, 4, 0);
										 }
										 rb = true;
									 }
									 else if(!rb){
										 pole[n.x][n.y - 2] = 1;
										 pole[n.x][n.y - 1] = 1;
										 b = true;
										 n.y -= 2;
										 p.push(n);

										 if (ServerStart) {
											 m1[0] = n.x;
											 m1[1] = n.y;
											 m1[2] = n.x;
											 m1[3] = n.y + 1;
											 send(Client, m1, 4, 0);
										 }
									 }
									// ns[0].x = n.x; ns[1].x = n.x;
									// ns[0].y = n.y - 2; ns[1].y = n.y - 1;
									 b = true;
									// n.y -= 2;
								 }
							 }
							 else if (k == 3) {
								 if ((pole[n.x - 2][n.y] == 3 || pole[n.x - 2][n.y] == 0 || l != 0) && pole[n.x - 2][n.y]  !=2 && pole[n.x - 2][n.y] != 5) {
									 if (pole[n.x-2][n.y] == 3) {
										 int b;
										 for (int i = 0;i < room;i++) {
											 if (r[i * 2].x <= n.x-2 && n.x-2 <= r[i * 2 + 1].x && r[i * 2].y <= n.y && n.y <= r[i * 2 + 1].y) {
												 b = i;
												 break;
											 }
										 }

										 for (int i = r[b * 2].x;i < r[b * 2 + 1].x;i++) {
											 for (int j = r[b * 2].y;j < r[b * 2 + 1].y;j++) {
												 pole[i][j] = 5;
											 }
										 }
										 pole[n.x - 2][n.y] = 5;
										 pole[n.x - 1][n.y] = 1;
										 if (ServerStart) {
											 m1[0] = n.x - 2;
											 m1[1] = n.y;
											 m1[2] = n.x - 1;
											 m1[3] = n.y;
											 send(Client, m1, 4, 0);
										 }
										 rb = false;
									 }
									 else if(!rb) {
										 pole[n.x - 2][n.y] = 1;
										 pole[n.x - 1][n.y] = 1;
										 b = true;
										 n.x -= 2;
										 p.push(n);

										 if (ServerStart) {
											 m1[0] = n.x;
											 m1[1] = n.y;
											 m1[2] = n.x + 1;
											 m1[3] = n.y;
											 send(Client, m1, 4, 0);
										 }
									 }
									// ns[0].x = n.x - 2; ns[1].x = n.x - 1;
									 //ns[0].y = n.y; ns[1].y = n.y;
									 b = true;
									// n.x -= 2;
								 }

							 }
							 
							 if (pole[52][52] == 1) {
								 pole[52][53] = 1;
								 pole[52][54] = 1;
								 if (ServerStart) {
									 m1[0] = 52;
									 m1[1] = 53;
									 m1[2] = 52;
									 m1[3] = 54;
									 send(Client, m1, 4, 0);
								 }
							 }

							 if (b) {
								 break;
							 }
						 }

						

					 }
					 else {
						 p.pop();
						 if (p.empty() == true) {
							
							 if (ServerStart) {
								 m1[0] = 100;
								 send(Client, m1, 4, 0);
							 }
							 char tp[2];
							 if (ServerStart) {
								 for (;true;) {
									 if (recv(Client, tp, 2, 0) != SOCKET_ERROR) {

										 if (tp[0] == 'o' && tp[1] == 'k') {
											 if (this->InvokeRequired) {
												 this->Invoke(gcnew Action(this, &MyForm::vis));
											 }
											 else {
												 vis();
											 }
											 break;
										 }
									 }
								 }
							 }
							 else {
								// if (tp[0] == 'o' && tp[1] == 'k') {
									 if (this->InvokeRequired) {
										 this->Invoke(gcnew Action(this, &MyForm::vis));
									 }
									 else {
										 vis();

									 }
							 }
							 //BPlay->Visible = true;
							 break;
						 }
					 }
				 }

			 }

			 void vis() {
				 
				 BPlay->Visible = true;
			 }

			 void drawroom() {
				 //int r;
				 //cin >> r;
				 pos n;
				 int s;
				 r = new pos[room * 2];
				 for (int i = 0; i< room; i++) {
					 if (i < 16) {
						 s = (rand() % 3) * 2 + 3;
					 }
					 else {
						 s = (rand() % 2) * 2 + 3;
					 }
					 if (i != 0) {
						 for (;true;) {
							 n.x = (rand() % (23 - s)) * 2 + 4;
							 n.y = (rand() % (23 - s)) * 2 + 4;
							 bool ft = true;
							 for (int j = 0;j < i ;j++) {
								 if ((((r[i * 2 + 1].x+2)<(n.x)) && ((r[i * 2 + 1].y)<(2<n.y))) ||  ((r[i * 2].x>n.x + s + 2 )&&( r[i * 2].y>n.y + s+2))) {
									 if (pole[n.x][n.y] == 3 || pole[n.x + s-1][n.y + s-1] == 3 || pole[n.x+s-1][n.y] == 3 || pole[n.x][n.y + s-1] == 3) {
										 ft = false;
										 //break;
									 }
										// cout << ' ';
									 
								 } else {
									 ft = false;
								 }
							 }
							 if (ft) {
								 //cout << n.x << ' ' << n.y << ' ' << n.x + s - 1 << ' ' << n.y + s - 1 << '\n';
								 break;
								
							 }
						 }
					 }
					 else {
						 n.x = (rand() % (23 - s)) * 2 + 4;
						 n.y = (rand() % (23 - s)) * 2 + 4;
					 }
					 char kc[4];
					 r[i * 2].x = n.x;
					 r[i * 2].y = n.y;
					 r[i * 2+1].x = n.x+s;
					 r[i * 2+1].y = n.y+s;
					 if (ServerStart) {
						 kc[0] = r[i * 2].x;
						 kc[1] = r[i * 2].y;
						 kc[2] = r[i * 2 + 1].x;
						 kc[3] = r[i * 2 + 1].y;
						 send(Client, kc, 4, 0);
					 }
					 bool d = false;
					 if (pole[n.x][n.y] != 3 && pole[n.x][n.y] != 2) {
						// d = true;
						 for (int i = 0; i<s; i++) {
							 for (int j = 0; j<s; j++) {
								 pole[n.x + i][n.y + j] = 3;
							 }
						 }
						 for (int i = 0;i < s + 2;i++) {
							 if (pole[n.x + i - 1][n.y - 1] == 1 ) {
								 if (!d) {
									 pole[n.x + i - 1][n.y - 1] = 2;
								 } { d = false; }
							 }
							 else 
							 if (pole[n.x - 1][n.y - 1 + i] == 1  ) {
								 if (!d) {
									 pole[n.x - 1][n.y - 1 + i] = 2;
								 } else { d = false; }
							 }
							 
							 if (pole[n.x + s][n.y - 1 + i] == 1) {
								 if (!d) {
									 pole[n.x + s][n.y - 1 + i] = 2;
								 }
								 else { d = false; }
							 }
							
							 if (pole[n.x + i - 1][n.y + s] == 1 ) {
								 if (!d) {
									 pole[n.x + i - 1][n.y + s] = 2;
								 }
								 else { d = false; }
							 }
							 
							
							
						 }

					 }
					 else { i--; }
					 //cout << i << '\n';

				 }
				 if (this->InvokeRequired) {
					 this->Invoke(gcnew Action(this, &MyForm::DrawPole));
				 }
				 else {
					 DrawPole();
				 }
				
				 char kc[4];
				 if (ServerStart) {
					 kc[0] = 127;
					 send(Client, kc, 4, 0);
				 }


			 }

	

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->ClientSize = System::Drawing::Size(284, 361);
		GW = gcnew Thread(gcnew ThreadStart(this, &MyForm::StartGame));
		GW->IsBackground = true;
		DP = gcnew Thread(gcnew ThreadStart(this, &MyForm::Create_maze));
		DP->IsBackground = true;
		Waitpl = gcnew Thread(gcnew ThreadStart(this, &MyForm::Waitserv));
		Waitpl->IsBackground = true;
		CLWork = gcnew Thread(gcnew ThreadStart(this, &MyForm::con));
		CLWork->IsBackground = true;
		ServerWait = gcnew Thread(gcnew ThreadStart(this, &MyForm::ServW));
		ServerWait->IsBackground = true;
		ClientWait = gcnew Thread(gcnew ThreadStart(this, &MyForm::ClietW));
		ClientWait->IsBackground = true;
		BOnePlayer->Visible = false;
		BTwoPlaers->Visible = false;
		BPlay->Visible = false;
		//Name5->Visible = false;
	}


			 bool Crcl = false;
			 int room = 0;
	public: void Create_maze() {
		if (pole == NULL) {
			pole = new int*[55];
			for (int i = 0; i < 55; i++) {

				pole[i] = new int[55];
				for (int j = 0; j < 55; j++) {
					pole[i][j] = 0;
				}
			}
			for (int i = 0; i<55; i++) {
				pole[0][i] = 2;
				pole[1][i] = 2;
				pole[53][i] = 2;
				pole[54][i] = 2;
				pole[i][0] = 2;
				pole[i][1] = 2;
				pole[i][53] = 2;
				pole[i][54] = 2;
			}
		}
		/// (ns == NULL) {
		//	ns = new pos[2];
		//}
		srand(time(0));
		f = true;
		drawmaze();
		
		f = false;
		
		if (this->InvokeRequired) {
			this->Invoke(gcnew Action(this, &MyForm::Set_Mes));
		}
		else {
			Set_Mes();
		}
		
	}
	public: void Set_Mes() {
		Textm->Text = "The maze is built";
		delete(DP);
		BPlay->Visible = true;
	}
	private: System::Void BCreate_Click(System::Object^  sender, System::EventArgs^  e) {
		DP->Start();
		

		
		// //////////////////////////////////////////
	}
private: System::Void maze_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {

}
private: System::Void maze_KeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
		
		 }
				  int szt = 0;
private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	
	//cout<<e->KeyCode;
	if (e->KeyValue == VK_UP || e->KeyCode == Keys::W) {
		if (pole[p1->tryGeetNB(0).x][p1->tryGeetNB(0).y] ==1 || pole[p1->tryGeetNB(0).x][p1->tryGeetNB(0).y] == 4) {
			p1->SetNapr(0);
			szt = (szt + 1) % 20;
		}
		//this->Testl->Size = System::Drawing::Size(szt, 13);
		
	}
	if (e->KeyValue == VK_RIGHT || e->KeyCode == Keys::D) {
		if (pole[p1->tryGeetNB(1).x][p1->tryGeetNB(1).y] ==1 || pole[p1->tryGeetNB(1).x][p1->tryGeetNB(1).y] == 4) {
			p1->SetNapr(1);
			szt = (szt + 1) % 20;
		}
		//this->Testl->Size = System::Drawing::Size(szt, 13);

	}
	if (e->KeyValue == VK_DOWN || e->KeyCode == Keys::S) {
		if (pole[p1->tryGeetNB(2).x][p1->tryGeetNB(2).y] ==1 || pole[p1->tryGeetNB(2).x][p1->tryGeetNB(2).y] == 4) {
			p1->SetNapr(2);
			szt = (szt + 1) % 20;
		}
		//this->Testl->Size = System::Drawing::Size(szt, 13);

	}
	if (e->KeyValue == VK_LEFT || e->KeyCode == Keys::A) {
		if (pole[p1->tryGeetNB(3).x][p1->tryGeetNB(3).y] ==1 || pole[p1->tryGeetNB(3).x][p1->tryGeetNB(3).y] == 4) {
			p1->SetNapr(3);
			szt = (szt + 1) % 20;
		}
		//this->Testl->Size = System::Drawing::Size(szt, 13);

	}
}
private: System::Void BPlay_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

}
private: System::Void TB_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

}
		// int bh = 0;
//private: System::Void Testl_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
//	//int time = 0;
//	bh++;
//	bh = bh % 15;
//	if (bh == 0) {
//		if (game) {
//			StartGame();
//		}
//
//	}
//	//szt = Testl->Size.Width;
//	
//	
//	//k = Testl->Size.Width;
//	szt = (szt + 1) % 25;
//	//int k = szt;
//	//cout << szt << " -> " << this->Testl->Size.Width << "( " << bh << " )" << '\n';
//	//delete(e);
//	this->TL2->Size = System::Drawing::Size(szt, 13);
//	//this->TL2->Size
//	cout << this->TL2->Size.Width << '\n';
//}
//		 //int bh = 0;
//
//private: System::Void TL2_SizeChanged_1(System::Object^  sender, System::EventArgs^  e) {
//	szt = (szt + 1) % 25;
//	//delete(e);
//	int k = szt;
//	cout << szt << " -> " << this->Testl->Size.Width << "( " << bh << " )" << '\n';
//	this->Testl->Size = System::Drawing::Size(szt, 13);
//	cout << this->Testl->Size.Width << '\n';
//}



private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

	



}



