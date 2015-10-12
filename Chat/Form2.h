//Form2.h
#include <Windows.h>
#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Net;
using namespace Sockets;

namespace CHAT {

	/// <summary>
	/// Form2 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}
		Form2(String^t1,String^t2,String^t3,String^t4,Socket^s,int i)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			textBox3->Text=t1;
			textBox4->Text=t2;
			textBox5->Text=t3;
			textBox6->Text=t4;
			n=s;
			if (i == 0){
				this->Text += "——服务端";
			}
			else{
				this->Text += "——客户端";
			}
			backgroundWorker1->RunWorkerAsync();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(278, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(268, 179);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(278, 226);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(268, 156);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::textBox2_KeyDown);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(223, 99);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"好友信息";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"好友IP";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(60, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 21);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 2;
			this->label4->Text = L"好友昵称";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(60, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 21);
			this->textBox4->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Location = System::Drawing::Point(12, 126);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 90);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"我的信息";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 8;
			this->label1->Text = L"我的IP";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(60, 20);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 21);
			this->textBox5->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"我的昵称";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(60, 58);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(157, 21);
			this->textBox6->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(171, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 53);
			this->button1->TabIndex = 13;
			this->button1->Text = L"发送消息》";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(171, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 48);
			this->button2->TabIndex = 14;
			this->button2->Text = L"退出程序";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form2::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &Form2::backgroundWorker1_ProgressChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(12, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 36);
			this->button3->TabIndex = 15;
			this->button3->Text = L"FTP文件传输...";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(12, 18);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 36);
			this->button4->TabIndex = 16;
			this->button4->Text = L"执行时间";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(66, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 36);
			this->button5->TabIndex = 17;
			this->button5->Text = L"进程同步";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(66, 58);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 36);
			this->button6->TabIndex = 18;
			this->button6->Text = L"文件复制";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(12, 58);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(44, 36);
			this->button7->TabIndex = 19;
			this->button7->Text = L"内存信息";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Location = System::Drawing::Point(15, 289);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(133, 100);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"操作系统实验演示";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(570, 401);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"聊天窗口";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form2::Form2_FormClosing);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:Socket^n;


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
				 if (textBox2->Text->Length==0) 
				 {
					 MessageBox::Show("不能发送空文本");
					 return;
				 }
				 try{
					 n->Send(System::Text::Encoding::Default->GetBytes(textBox2->Text));
				 }
				 catch(System::Exception ^error)
				 {
					 MessageBox::Show(error->Message);
					 return;
				 }
				 iSay(textBox2->Text);
				 textBox2->Text="";
			 }
			 void ShowAdd(...array<String^>^s)
			 {
				 for (int i=0;i!=s->Length;++i)
					 textBox1->Text+=s[i]+Environment::NewLine;
			 }
			 void iSay(String^s)
			 {
				 ShowAdd(textBox6->Text+":",s+Environment::NewLine);
				 textBox1->SelectionStart=textBox1->Text->Length;
				 textBox1->ScrollToCaret();
			 }
			 void friendSay(String^s)
			 {
				 ShowAdd(textBox4->Text+":",s+" "+Environment::NewLine);
				 textBox1->SelectionStart=textBox1->Text->Length;
				 textBox1->ScrollToCaret();
			 }
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
				 array<Byte>^data=gcnew array<Byte>(1024);

				 try
				 {
					 while(1){
						 array<Byte>::Clear(data,0,1024);
						 n->Receive(data);
						 int i=0;
						 while(data[i++]); 
						 safe_cast<BackgroundWorker^>(sender)->ReportProgress(1,System::Text::Encoding::Default->GetString(data,0,i-1));
					 }
				 }
				 catch(System::Exception ^error)
				 {
					 MessageBox::Show(error->Message);
					 return;
				 }

			 }
	private: System::Void backgroundWorker1_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e) {
				 friendSay(e->UserState->ToString());

			 }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				 Close();
			 }
	private: System::Void Form2_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
				 Application::Exit();
			 }
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
				 if (e->KeyData==Keys::Control+Keys::Enter)
					 button1->PerformClick();
				 else if (e->KeyData==Keys::Alt+Keys::C)
					 Application::Exit();

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 STARTUPINFO si;
				 ZeroMemory(reinterpret_cast<void*>(&si),sizeof(si));
				 si.cb = sizeof(si);
				 PROCESS_INFORMATION pi;
				 CreateProcess("FtpClient.exe",NULL,NULL,NULL,false,NULL,NULL,NULL,&si,&pi);
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO si;
			 ZeroMemory(reinterpret_cast<void*>(&si),sizeof(si));
			 si.cb = sizeof(si);
			 PROCESS_INFORMATION pi;
			 CreateProcess("mytime.exe",NULL,NULL,NULL,false,NULL,NULL,NULL,&si,&pi);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO si;
			 ZeroMemory(reinterpret_cast<void*>(&si),sizeof(si));
			 si.cb = sizeof(si);
			 PROCESS_INFORMATION pi;
			 CreateProcess("ProducerAndConsumer.exe",NULL,NULL,NULL,false,NULL,NULL,NULL,&si,&pi);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO si;
			 ZeroMemory(reinterpret_cast<void*>(&si),sizeof(si));
			 si.cb = sizeof(si);
			 PROCESS_INFORMATION pi;
			 CreateProcess("memory.exe",NULL,NULL,NULL,false,NULL,NULL,NULL,&si,&pi);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO si;
			 ZeroMemory(reinterpret_cast<void*>(&si),sizeof(si));
			 si.cb = sizeof(si);
			 PROCESS_INFORMATION pi;
			 CreateProcess("mycp.exe",NULL,NULL,NULL,false,NULL,NULL,NULL,&si,&pi);
		 }
};
}