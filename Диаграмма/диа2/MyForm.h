#pragma once
namespace ���2 {
	// ������������ ������������ ����
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();// ����� ���������������� ����������.
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)// ����������, ��������.
			{
				delete components;
			}
		}

	protected:
	protected:
	private: System::Windows::Forms::GroupBox^ ���;
	private: System::Windows::Forms::Label^ ���;
	private: System::Windows::Forms::Label^ ���;
	private: System::Windows::Forms::Label^ ���;
	private: System::Windows::Forms::Label^ ���;
	private: System::Windows::Forms::Label^ ���;
	private: System::Windows::Forms::Label^ ���;
	private: System::Windows::Forms::Label^ ��;
	private: System::Windows::Forms::Label^ ��;
	private: System::Windows::Forms::Label^ ��;
	private: System::Windows::Forms::Label^ ��;
	private: System::Windows::Forms::Label^ ��;
	private: System::Windows::Forms::Label^ ��;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ���������;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)//������������� �����
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->��� = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->��� = (gcnew System::Windows::Forms::Label());
			this->��� = (gcnew System::Windows::Forms::Label());
			this->��� = (gcnew System::Windows::Forms::Label());
			this->��� = (gcnew System::Windows::Forms::Label());
			this->��� = (gcnew System::Windows::Forms::Label());
			this->��� = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->��������� = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->���->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->���������))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Controls->Add(this->textBox12);
			this->���->Controls->Add(this->textBox11);
			this->���->Controls->Add(this->textBox10);
			this->���->Controls->Add(this->textBox9);
			this->���->Controls->Add(this->textBox8);
			this->���->Controls->Add(this->textBox7);
			this->���->Controls->Add(this->textBox6);
			this->���->Controls->Add(this->textBox5);
			this->���->Controls->Add(this->textBox4);
			this->���->Controls->Add(this->textBox3);
			this->���->Controls->Add(this->textBox2);
			this->���->Controls->Add(this->textBox1);
			this->���->Controls->Add(this->���);
			this->���->Controls->Add(this->���);
			this->���->Controls->Add(this->���);
			this->���->Controls->Add(this->���);
			this->���->Controls->Add(this->���);
			this->���->Controls->Add(this->���);
			this->���->Controls->Add(this->��);
			this->���->Controls->Add(this->��);
			this->���->Controls->Add(this->��);
			this->���->Controls->Add(this->��);
			this->���->Controls->Add(this->��);
			this->���->Controls->Add(this->��);
			this->���->Name = L"���";
			this->���->TabStop = false;
			// 
			// textBox12
			// 
			resources->ApplyResources(this->textBox12, L"textBox12");
			this->textBox12->Name = L"textBox12";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged_1);
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox11
			// 
			resources->ApplyResources(this->textBox11, L"textBox11");
			this->textBox11->Name = L"textBox11";
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox10
			// 
			resources->ApplyResources(this->textBox10, L"textBox10");
			this->textBox10->Name = L"textBox10";
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox9
			// 
			resources->ApplyResources(this->textBox9, L"textBox9");
			this->textBox9->Name = L"textBox9";
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox8
			// 
			resources->ApplyResources(this->textBox8, L"textBox8");
			this->textBox8->Name = L"textBox8";
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox7
			// 
			resources->ApplyResources(this->textBox7, L"textBox7");
			this->textBox7->Name = L"textBox7";
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox6
			// 
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->Name = L"textBox6";
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Name = L"���";
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Name = L"���";
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Name = L"���";
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Name = L"���";
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Name = L"���";
			// 
			// ���
			// 
			resources->ApplyResources(this->���, L"���");
			this->���->Name = L"���";
			// 
			// ��
			// 
			resources->ApplyResources(this->��, L"��");
			this->��->Name = L"��";
			// 
			// ��
			// 
			resources->ApplyResources(this->��, L"��");
			this->��->Name = L"��";
			// 
			// ��
			// 
			resources->ApplyResources(this->��, L"��");
			this->��->Name = L"��";
			// 
			// ��
			// 
			resources->ApplyResources(this->��, L"��");
			this->��->Name = L"��";
			// 
			// ��
			// 
			resources->ApplyResources(this->��, L"��");
			this->��->Name = L"��";
			// 
			// ��
			// 
			resources->ApplyResources(this->��, L"��");
			this->��->Name = L"��";
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// ���������
			// 
			resources->ApplyResources(this->���������, L"���������");
			chartArea2->AlignmentOrientation = System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Horizontal;
			chartArea2->Name = L"ChartArea1";
			this->���������->ChartAreas->Add(chartArea2);
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend2->IsTextAutoFit = false;
			legend2->ItemColumnSpacing = 10;
			legend2->LegendItemOrder = System::Windows::Forms::DataVisualization::Charting::LegendItemOrder::ReversedSeriesOrder;
			legend2->MaximumAutoSize = 12;
			legend2->Name = L"Legend1";
			legend2->ShadowColor = System::Drawing::SystemColors::ActiveBorder;
			legend2->TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Tall;
			legend2->Title = L"������";
			this->���������->Legends->Add(legend2);
			this->���������->Name = L"���������";
			this->���������->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->���������->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(12) {
				System::Drawing::Color::Blue, System::Drawing::Color::Cyan,
					System::Drawing::Color::ForestGreen, System::Drawing::Color::LimeGreen, System::Drawing::Color::MediumSpringGreen, System::Drawing::Color::Yellow,
					System::Drawing::Color::Gold, System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
							static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
								static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
										static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)))
			};
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->���������->Series->Add(series2);
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"���������";
			this->���������->Titles->Add(title2);
			// 
			// groupBox2
			// 
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			resources->ApplyResources(this->contextMenuStrip1, L"contextMenuStrip1");
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->���������);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->���);
			this->Name = L"MyForm";
			this->���->ResumeLayout(false);
			this->���->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->���������))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//������� ����������� ��� ������� ������ "��������� ���������"
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->���������->Series["Series1"]->Points->AddXY(1, textBox1->Text);
		this->���������->Series["Series1"]->Points->AddXY(2, textBox2->Text);
		this->���������->Series["Series1"]->Points->AddXY(3, textBox3->Text);
		this->���������->Series["Series1"]->Points->AddXY(4, textBox4->Text);
		this->���������->Series["Series1"]->Points->AddXY(5, textBox5->Text);
		this->���������->Series["Series1"]->Points->AddXY(6, textBox6->Text);
		this->���������->Series["Series1"]->Points->AddXY(7, textBox7->Text);
		this->���������->Series["Series1"]->Points->AddXY(8, textBox8->Text);
		this->���������->Series["Series1"]->Points->AddXY(9, textBox9->Text);
		this->���������->Series["Series1"]->Points->AddXY(10, textBox10->Text);
		this->���������->Series["Series1"]->Points->AddXY(11, textBox11->Text);
		this->���������->Series["Series1"]->Points->AddXY(12, textBox12->Text);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		   //����������� �� ���� ������ ����, ������� � ������� BackSpace.
	private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44)
	{
		e->Handled = true;
	}
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
private: System::Void textBox12_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
	   //������� ����������� ��� ������� ������ "�������� ���������".
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->���������->Series["Series1"]->Points->Clear();
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox6->Clear();
	this->textBox7->Clear();
	this->textBox8->Clear();
	this->textBox9->Clear();
	this->textBox10->Clear();
	this->textBox11->Clear();
	this->textBox12->Clear();

}
};
}