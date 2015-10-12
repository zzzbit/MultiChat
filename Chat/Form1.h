//Form1.h

#pragma once
#include"Form2.h"
#include <stdlib.h>
#include <stdio.h>
namespace CHAT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Net;
	using namespace Sockets;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			listener=gcnew Socket(AddressFamily::InterNetwork,SocketType::Stream,ProtocolType::Unspecified);
			try
			{
				listener->Bind(gcnew IPEndPoint((IPAddress::Any),5555));


			}
			catch(System::Exception^ e)
			{
				MessageBox::Show(e->ToString());
			}

		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::ComponentModel::BackgroundWorker^ waitForAccept;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->waitForAccept = (gcnew System::ComponentModel::BackgroundWorker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"我的昵称";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 21);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"127.0.0.1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(342, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"连接服务端";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(60, 16);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(202, 21);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 12);
			this->label3->TabIndex = 8;
			this->label3->Text = L"我的IP";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(61, 214);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 74);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"我的信息";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(59, 46);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(202, 21);
			this->textBox4->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(342, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 40);
			this->button2->TabIndex = 6;
			this->button2->Text = L"退出程序";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(64, 140);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 56);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"好友信息";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"好友IP";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(2, 290);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(10, 21);
			this->textBox2->TabIndex = 7;
			this->textBox2->Visible = false;
			// 
			// waitForAccept
			// 
			this->waitForAccept->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::waitForAccept_DoWork);
			this->waitForAccept->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::waitForAccept_RunWorkerCompleted);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(341, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 42);
			this->button3->TabIndex = 11;
			this->button3->Text = L"建立服务端";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Location = System::Drawing::Point(366, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(22, 23);
			this->button4->TabIndex = 12;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 12);
			this->label4->TabIndex = 9;
			this->label4->Text = L"（建立服务端时不需要填写）";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(447, 361);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"聊天室连接窗口";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:Socket^ listener,^n;


	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
				 textBox3->Text=System::Net::Dns::GetHostAddresses(Environment::MachineName)[1]->ToString();
			 }

	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {

			 }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				 Close();
			 }

	private: System::Void waitForAccept_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
				 n=listener->Accept();
				 array<Byte>^data=gcnew array<Byte>(30);
				 n->Send(System::Text::Encoding::Default->GetBytes(textBox4->Text));
				 n->Receive(data,30,SocketFlags::None);
				 e->Result=System::Text::Encoding::Default->GetString(data);
			 }
	private: System::Void waitForAccept_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {
				 textBox1->Text=n->RemoteEndPoint->ToString();
				 textBox2->Text=e->Result->ToString();
				 textBox1->Enabled=false;
				 MessageBox::Show("已有好友连接到你的电脑...");
				 (gcnew Form2(textBox1->Text,textBox2->Text,textBox3->Text,textBox4->Text,n,0))->Show();
				 this->Hide();
				 listener->Listen(1);
				 waitForAccept->RunWorkerAsync();

			 }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
				 if (textBox4->Text->Length==0)
				 {
					 MessageBox::Show("请输入你的上网昵称，不能为空！");
					 return;
				 }
				 if (textBox1->Text->Length==0)
				 {
					 MessageBox::Show("请正确输入好友IP");
					 return;
				 }
				 try
				 {
					 array<Byte>^name=gcnew array<Byte>(100);
					 listener->Connect(gcnew IPEndPoint(IPAddress::Parse(textBox1->Text),5555));
					 listener->Send(System::Text::Encoding::Default->GetBytes(textBox4->Text),SocketFlags::None);
					 listener->Receive(name,SocketFlags::None);
					 textBox2->Text=System::Text::Encoding::Default->GetString(name);
				 }catch(System::Exception ^e)
				 {
					 MessageBox::Show(e->Message);
					 return;
				 }
				 n=listener;
				 (gcnew Form2(textBox1->Text,textBox2->Text,textBox3->Text,textBox4->Text,n,1))->Show();
				 Hide();
			 }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
				 if (textBox4->Text->Length==0)
				 {
					 MessageBox::Show("请输入你的上网昵称，不能为空！");
					 return;
				 }
				 listener->Listen(1);
				 waitForAccept->RunWorkerAsync();
				 button1->Enabled=false;
				 button3->Enabled=false;
				 textBox1->Enabled=false;
				 textBox4->Enabled=false;
			 }


private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 STARTUPINFO si;
			 ZeroMemory(reinterpret_cast<void*>(&si),sizeof(si));
			 si.cb = sizeof(si);
			 PROCESS_INFORMATION pi;
			 CreateProcess("openReadMe.exe",NULL,NULL,NULL,false,NULL,NULL,NULL,&si,&pi);
		 }
};
}