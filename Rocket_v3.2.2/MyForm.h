#pragma once
#include<string>
#include"Point.h"
#include"counting.h"
namespace Rocket {

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
			InitializeComponent();
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
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxLen;
	private: System::Windows::Forms::Label^ labelYmax;
	private: System::Windows::Forms::Label^ labelXmax;
	private: System::Windows::Forms::RadioButton^ radioButtonLow;
	private: System::Windows::Forms::RadioButton^ radioButtonHigh;
	private: System::Windows::Forms::Label^ labelAlpha;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxX;
	private: System::Windows::Forms::Button^ buttonAlpha;

	private: System::Windows::Forms::Button^ buttonCalc;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxMass;
	private: System::Windows::Forms::TextBox^ textBoxFuel;
	private: System::Windows::Forms::TextBox^ textBoxForce;
	private: System::Windows::Forms::TextBox^ textBoxAngle;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxMassFuel;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::LegendCellColumn^ legendCellColumn1 = (gcnew System::Windows::Forms::DataVisualization::Charting::LegendCellColumn());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxLen = (gcnew System::Windows::Forms::TextBox());
			this->labelYmax = (gcnew System::Windows::Forms::Label());
			this->labelXmax = (gcnew System::Windows::Forms::Label());
			this->radioButtonLow = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonHigh = (gcnew System::Windows::Forms::RadioButton());
			this->labelAlpha = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->buttonAlpha = (gcnew System::Windows::Forms::Button());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxMass = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFuel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxForce = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAngle = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxMassFuel = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Len";
			// 
			// textBoxLen
			// 
			this->textBoxLen->Location = System::Drawing::Point(80, 142);
			this->textBoxLen->Name = L"textBoxLen";
			this->textBoxLen->Size = System::Drawing::Size(100, 20);
			this->textBoxLen->TabIndex = 40;
			this->textBoxLen->Text = L"1";
			// 
			// labelYmax
			// 
			this->labelYmax->AutoSize = true;
			this->labelYmax->Location = System::Drawing::Point(78, 348);
			this->labelYmax->Name = L"labelYmax";
			this->labelYmax->Size = System::Drawing::Size(0, 13);
			this->labelYmax->TabIndex = 39;
			// 
			// labelXmax
			// 
			this->labelXmax->AutoSize = true;
			this->labelXmax->Location = System::Drawing::Point(78, 330);
			this->labelXmax->Name = L"labelXmax";
			this->labelXmax->Size = System::Drawing::Size(0, 13);
			this->labelXmax->TabIndex = 38;
			// 
			// radioButtonLow
			// 
			this->radioButtonLow->AutoSize = true;
			this->radioButtonLow->Location = System::Drawing::Point(80, 295);
			this->radioButtonLow->Name = L"radioButtonLow";
			this->radioButtonLow->Size = System::Drawing::Size(45, 17);
			this->radioButtonLow->TabIndex = 37;
			this->radioButtonLow->Text = L"Low";
			this->radioButtonLow->UseVisualStyleBackColor = true;
			// 
			// radioButtonHigh
			// 
			this->radioButtonHigh->AutoSize = true;
			this->radioButtonHigh->Checked = true;
			this->radioButtonHigh->Location = System::Drawing::Point(80, 272);
			this->radioButtonHigh->Name = L"radioButtonHigh";
			this->radioButtonHigh->Size = System::Drawing::Size(47, 17);
			this->radioButtonHigh->TabIndex = 36;
			this->radioButtonHigh->TabStop = true;
			this->radioButtonHigh->Text = L"High";
			this->radioButtonHigh->UseVisualStyleBackColor = true;
			// 
			// labelAlpha
			// 
			this->labelAlpha->AutoSize = true;
			this->labelAlpha->Location = System::Drawing::Point(91, 363);
			this->labelAlpha->Name = L"labelAlpha";
			this->labelAlpha->Size = System::Drawing::Size(34, 13);
			this->labelAlpha->TabIndex = 35;
			this->labelAlpha->Text = L"Alpha";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"X";
			// 
			// textBoxX
			// 
			this->textBoxX->Location = System::Drawing::Point(81, 226);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(100, 20);
			this->textBoxX->TabIndex = 33;
			this->textBoxX->Text = L"100";
			// 
			// buttonAlpha
			// 
			this->buttonAlpha->Location = System::Drawing::Point(80, 197);
			this->buttonAlpha->Name = L"buttonAlpha";
			this->buttonAlpha->Size = System::Drawing::Size(100, 23);
			this->buttonAlpha->TabIndex = 32;
			this->buttonAlpha->Text = L"Alpha";
			this->buttonAlpha->UseVisualStyleBackColor = true;
			this->buttonAlpha->Click += gcnew System::EventHandler(this, &MyForm::buttonAlpha_Click);
			// 
			// buttonCalc
			// 
			this->buttonCalc->Location = System::Drawing::Point(80, 168);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(100, 23);
			this->buttonCalc->TabIndex = 29;
			this->buttonCalc->Text = L"Calc";
			this->buttonCalc->UseVisualStyleBackColor = true;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &MyForm::buttonCalc_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Mass";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Fuel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Force";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Angle";
			// 
			// textBoxMass
			// 
			this->textBoxMass->Location = System::Drawing::Point(80, 90);
			this->textBoxMass->Name = L"textBoxMass";
			this->textBoxMass->Size = System::Drawing::Size(100, 20);
			this->textBoxMass->TabIndex = 24;
			this->textBoxMass->Text = L"1";
			// 
			// textBoxFuel
			// 
			this->textBoxFuel->Location = System::Drawing::Point(80, 64);
			this->textBoxFuel->Name = L"textBoxFuel";
			this->textBoxFuel->Size = System::Drawing::Size(100, 20);
			this->textBoxFuel->TabIndex = 23;
			this->textBoxFuel->Text = L"2,7";
			// 
			// textBoxForce
			// 
			this->textBoxForce->Location = System::Drawing::Point(80, 38);
			this->textBoxForce->Name = L"textBoxForce";
			this->textBoxForce->Size = System::Drawing::Size(100, 20);
			this->textBoxForce->TabIndex = 22;
			this->textBoxForce->Text = L"22";
			// 
			// textBoxAngle
			// 
			this->textBoxAngle->Location = System::Drawing::Point(80, 12);
			this->textBoxAngle->Name = L"textBoxAngle";
			this->textBoxAngle->Size = System::Drawing::Size(100, 20);
			this->textBoxAngle->TabIndex = 21;
			this->textBoxAngle->Text = L"45";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legendCellColumn1->Name = L"Column1";
			legend1->CellColumns->Add(legendCellColumn1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(199, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Rocket";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(665, 583);
			this->chart1->TabIndex = 40;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Position->Auto = false;
			title1->Position->Height = 2;
			title1->Position->Width = 100;
			title1->Position->Y = 3;
			this->chart1->Titles->Add(title1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 43;
			this->label7->Text = L"MassFuel";
			// 
			// textBoxMassFuel
			// 
			this->textBoxMassFuel->Location = System::Drawing::Point(80, 116);
			this->textBoxMassFuel->Name = L"textBoxMassFuel";
			this->textBoxMassFuel->Size = System::Drawing::Size(100, 20);
			this->textBoxMassFuel->TabIndex = 42;
			this->textBoxMassFuel->Text = L"1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 607);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxMassFuel);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxLen);
			this->Controls->Add(this->labelYmax);
			this->Controls->Add(this->labelXmax);
			this->Controls->Add(this->radioButtonLow);
			this->Controls->Add(this->radioButtonHigh);
			this->Controls->Add(this->labelAlpha);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxX);
			this->Controls->Add(this->buttonAlpha);
			this->Controls->Add(this->buttonCalc);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxMass);
			this->Controls->Add(this->textBoxFuel);
			this->Controls->Add(this->textBoxForce);
			this->Controls->Add(this->textBoxAngle);
			this->Name = L"MyForm";
			this->Text = L"Rocket v3.2.2(developing)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//����������� ��� ������� �� ������ Calc
	private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		double angle, force, len, fuel, mass;

		//�������� �������� �� ����������
		counting ee(textBoxAngle->Text, textBoxForce->Text,
			textBoxLen->Text, textBoxFuel->Text, textBoxMass->Text, textBoxMassFuel->Text);


		//�������� �������� �� ������ counting ������ Coordinates � ������ graph
		vector<point> graph = ee.Coordinates();


		//��������� ������� ������ ������ � ������� chart
		for (int i = 0; i < graph.size(); i++)

			//�������� �������� � ������ ���� chart
			chart1->Series["Rocket"]->Points->AddXY(graph[i].x, graph[i].y);//�������� � �
	}
	// ����������� ��� ������� �� ������ Alpha
	private: System::Void buttonAlpha_Click(System::Object^ sender, System::EventArgs^ e) {
		//���������� �������� �� ���������� X
		double findX = Convert::ToDouble(textBoxX->Text);
		double findAlpha;
		double xmax = 0;

		//�������� �������� �� ����������
		counting ee(textBoxAngle->Text, textBoxForce->Text,
			textBoxLen->Text, textBoxFuel->Text, textBoxMass->Text, textBoxMassFuel->Text);
		vector<point> p;

		for (findAlpha = 89.9f; findAlpha > 0; findAlpha -= 0.1f) //������� �����
		{
			p = ee.Coordinates(findAlpha);
			if (p[p.size() - 1].x > xmax)
				xmax = p[p.size() - 1].x;
		}
		//��������� ������ � ������� messagebox
		if (findX > xmax)
		{			
			System::Windows::Forms::MessageBox::Show("�������� ��������� ������ ��������� ������������. " +
				"������������ ��������� ������ ���������� " + Math::Round(xmax, 3).ToString(), "������!");
			return;
		}
		if (findX < 10)
		{
			System::Windows::Forms::MessageBox::Show("��� ������ �� ����� ��������� �� ������ ����������. ", "������!");
			return;
		}

		//�������� ������������� High/Low
		if (radioButtonHigh->Checked)
		{
			for (findAlpha = 89.9f; findAlpha > 0; findAlpha -= 0.1f) //������� ����� �� �������� � ��������
			{
				p = ee.Coordinates(findAlpha);
				if (p[p.size() - 1].x > findX)
					break;
			}
		}
		else
		{
			for (findAlpha = 0.1f; findAlpha < 90; findAlpha += 0.1f) //������� ����� �� �������� � ��������
			{
				p = ee.Coordinates(findAlpha);
				if (p[p.size() - 1].x > findX)
					break;
			}
		}

		//����� � ���� ���� ��� ������� ������ �������� � �������� �����
		labelAlpha->Text = "Alpha = " + (((int)(findAlpha * 100)) / 100.0f).ToString();

		//����� � ���� ������������ ��������� ������
		labelXmax->Text = "X max = " + Math::Round(p[p.size() - 1].x, 3).ToString();

		//���������� ��� ��������� ������������� �������� � �����
		double ymax = 0;

		//���� ��� ���������� ������������� �������� � Vector
		for each (point var in p)
			if (ymax < var.y)
				ymax = var.y;

		//����� ������������ ������ ��� ������ � ����������� �� ��������
		labelYmax->Text = "Y max = " + Math::Round(ymax, 3).ToString();
	}
};
}
