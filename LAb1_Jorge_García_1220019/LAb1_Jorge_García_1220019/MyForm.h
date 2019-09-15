#pragma once
#include "Recursividad.h"

namespace LAb1JorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tBFib;
	protected:

	protected:
	private: System::Windows::Forms::Button^  btnFibonacci;
	private: System::Windows::Forms::Label^  lblNum;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::Button^  btnFactorial;
	private: System::Windows::Forms::Button^  btnBin;
	private: System::Windows::Forms::TabControl^  tbControl;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  tBnum1;
	private: System::Windows::Forms::TabControl^  tCEj1;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  lblRes;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbnum2;
	private: System::Windows::Forms::Button^  btnMult;
	private: System::Windows::Forms::TabPage^  tPEJ2;



	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtBD;

	private: System::Windows::Forms::TextBox^  txtBO;
	private: System::Windows::Forms::TextBox^  txtNumT;



	private: System::Windows::Forms::TextBox^  txtPali;

	private: System::Windows::Forms::Button^  BtnPali;
	private: System::Windows::Forms::Label^  lblPali;
	private: System::Windows::Forms::Button^  btnCambio;
	private: System::Windows::Forms::Label^  lblTransformado;
	private: System::Windows::Forms::Label^  label6;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tBFib = (gcnew System::Windows::Forms::TextBox());
			this->btnFibonacci = (gcnew System::Windows::Forms::Button());
			this->lblNum = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->btnFactorial = (gcnew System::Windows::Forms::Button());
			this->btnBin = (gcnew System::Windows::Forms::Button());
			this->tbControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tCEj1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->lblRes = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbnum2 = (gcnew System::Windows::Forms::TextBox());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->tBnum1 = (gcnew System::Windows::Forms::TextBox());
			this->tPEJ2 = (gcnew System::Windows::Forms::TabPage());
			this->lblPali = (gcnew System::Windows::Forms::Label());
			this->txtPali = (gcnew System::Windows::Forms::TextBox());
			this->BtnPali = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->lblTransformado = (gcnew System::Windows::Forms::Label());
			this->btnCambio = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBD = (gcnew System::Windows::Forms::TextBox());
			this->txtBO = (gcnew System::Windows::Forms::TextBox());
			this->txtNumT = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbControl->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tCEj1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tPEJ2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tBFib
			// 
			this->tBFib->Location = System::Drawing::Point(171, 74);
			this->tBFib->Name = L"tBFib";
			this->tBFib->Size = System::Drawing::Size(100, 20);
			this->tBFib->TabIndex = 0;
			// 
			// btnFibonacci
			// 
			this->btnFibonacci->Location = System::Drawing::Point(109, 109);
			this->btnFibonacci->Name = L"btnFibonacci";
			this->btnFibonacci->Size = System::Drawing::Size(108, 24);
			this->btnFibonacci->TabIndex = 1;
			this->btnFibonacci->Text = L"Calcular Fibonacci";
			this->btnFibonacci->UseVisualStyleBackColor = true;
			this->btnFibonacci->Click += gcnew System::EventHandler(this, &MyForm::btnFibonacci_Click);
			// 
			// lblNum
			// 
			this->lblNum->AutoSize = true;
			this->lblNum->Location = System::Drawing::Point(180, 58);
			this->lblNum->Name = L"lblNum";
			this->lblNum->Size = System::Drawing::Size(83, 13);
			this->lblNum->TabIndex = 2;
			this->lblNum->Text = L"Ingrese número:";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(168, 179);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(61, 13);
			this->lblResult->TabIndex = 3;
			this->lblResult->Text = L"Resultado: ";
			// 
			// btnFactorial
			// 
			this->btnFactorial->Location = System::Drawing::Point(217, 109);
			this->btnFactorial->Name = L"btnFactorial";
			this->btnFactorial->Size = System::Drawing::Size(108, 24);
			this->btnFactorial->TabIndex = 4;
			this->btnFactorial->Text = L"Calcular Factorial";
			this->btnFactorial->UseVisualStyleBackColor = true;
			this->btnFactorial->Click += gcnew System::EventHandler(this, &MyForm::btnFactorial_Click);
			// 
			// btnBin
			// 
			this->btnBin->Location = System::Drawing::Point(183, 139);
			this->btnBin->Name = L"btnBin";
			this->btnBin->Size = System::Drawing::Size(75, 23);
			this->btnBin->TabIndex = 5;
			this->btnBin->Text = L"Binario";
			this->btnBin->UseVisualStyleBackColor = true;
			this->btnBin->Click += gcnew System::EventHandler(this, &MyForm::btnBin_Click);
			// 
			// tbControl
			// 
			this->tbControl->Controls->Add(this->tabPage2);
			this->tbControl->Controls->Add(this->tabPage1);
			this->tbControl->Location = System::Drawing::Point(55, 15);
			this->tbControl->Name = L"tbControl";
			this->tbControl->SelectedIndex = 0;
			this->tbControl->Size = System::Drawing::Size(448, 311);
			this->tbControl->TabIndex = 6;
			this->tbControl->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->tCEj1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(440, 285);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Tareas";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ejercicio 1", L"Ejercicio 2", L"Ejercicio 3" });
			this->comboBox1->Location = System::Drawing::Point(21, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"Seleccione Ejercicio";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// tCEj1
			// 
			this->tCEj1->Controls->Add(this->tabPage3);
			this->tCEj1->Controls->Add(this->tPEJ2);
			this->tCEj1->Controls->Add(this->tabPage4);
			this->tCEj1->Location = System::Drawing::Point(148, 24);
			this->tCEj1->Name = L"tCEj1";
			this->tCEj1->SelectedIndex = 0;
			this->tCEj1->Size = System::Drawing::Size(261, 255);
			this->tCEj1->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->lblRes);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->tbnum2);
			this->tabPage3->Controls->Add(this->btnMult);
			this->tabPage3->Controls->Add(this->tBnum1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(253, 229);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Ejercicio 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// lblRes
			// 
			this->lblRes->AutoSize = true;
			this->lblRes->Location = System::Drawing::Point(57, 127);
			this->lblRes->Name = L"lblRes";
			this->lblRes->Size = System::Drawing::Size(61, 13);
			this->lblRes->TabIndex = 5;
			this->lblRes->Text = L"Resultado: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(153, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Número 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Número 1";
			// 
			// tbnum2
			// 
			this->tbnum2->Location = System::Drawing::Point(135, 61);
			this->tbnum2->Name = L"tbnum2";
			this->tbnum2->Size = System::Drawing::Size(91, 20);
			this->tbnum2->TabIndex = 2;
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(85, 101);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(75, 23);
			this->btnMult->TabIndex = 1;
			this->btnMult->Text = L"Calcular";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::btnMult_Click);
			// 
			// tBnum1
			// 
			this->tBnum1->Location = System::Drawing::Point(27, 61);
			this->tBnum1->Name = L"tBnum1";
			this->tBnum1->Size = System::Drawing::Size(91, 20);
			this->tBnum1->TabIndex = 0;
			// 
			// tPEJ2
			// 
			this->tPEJ2->Controls->Add(this->label6);
			this->tPEJ2->Controls->Add(this->lblPali);
			this->tPEJ2->Controls->Add(this->txtPali);
			this->tPEJ2->Controls->Add(this->BtnPali);
			this->tPEJ2->Location = System::Drawing::Point(4, 22);
			this->tPEJ2->Name = L"tPEJ2";
			this->tPEJ2->Padding = System::Windows::Forms::Padding(3);
			this->tPEJ2->Size = System::Drawing::Size(253, 229);
			this->tPEJ2->TabIndex = 1;
			this->tPEJ2->Text = L"Ejercicio 2";
			this->tPEJ2->UseVisualStyleBackColor = true;
			// 
			// lblPali
			// 
			this->lblPali->AutoSize = true;
			this->lblPali->Location = System::Drawing::Point(71, 88);
			this->lblPali->Name = L"lblPali";
			this->lblPali->Size = System::Drawing::Size(61, 13);
			this->lblPali->TabIndex = 2;
			this->lblPali->Text = L"Resultado: ";
			// 
			// txtPali
			// 
			this->txtPali->Location = System::Drawing::Point(74, 51);
			this->txtPali->Name = L"txtPali";
			this->txtPali->Size = System::Drawing::Size(100, 20);
			this->txtPali->TabIndex = 1;
			// 
			// BtnPali
			// 
			this->BtnPali->Location = System::Drawing::Point(88, 115);
			this->BtnPali->Name = L"BtnPali";
			this->BtnPali->Size = System::Drawing::Size(75, 23);
			this->BtnPali->TabIndex = 0;
			this->BtnPali->Text = L"Verificar palabra";
			this->BtnPali->UseVisualStyleBackColor = true;
			this->BtnPali->Click += gcnew System::EventHandler(this, &MyForm::BtnPali_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->lblTransformado);
			this->tabPage4->Controls->Add(this->btnCambio);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->txtBD);
			this->tabPage4->Controls->Add(this->txtBO);
			this->tabPage4->Controls->Add(this->txtNumT);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(253, 229);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Ejercicio 3";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// lblTransformado
			// 
			this->lblTransformado->AutoSize = true;
			this->lblTransformado->Location = System::Drawing::Point(69, 127);
			this->lblTransformado->Name = L"lblTransformado";
			this->lblTransformado->Size = System::Drawing::Size(61, 13);
			this->lblTransformado->TabIndex = 13;
			this->lblTransformado->Text = L"Resultado: ";
			// 
			// btnCambio
			// 
			this->btnCambio->Location = System::Drawing::Point(72, 155);
			this->btnCambio->Name = L"btnCambio";
			this->btnCambio->Size = System::Drawing::Size(100, 22);
			this->btnCambio->TabIndex = 12;
			this->btnCambio->Text = L"Cambio de base";
			this->btnCambio->UseVisualStyleBackColor = true;
			this->btnCambio->Click += gcnew System::EventHandler(this, &MyForm::btnCambio_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Base a convertir";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Base origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Número a convertir";
			// 
			// txtBD
			// 
			this->txtBD->Location = System::Drawing::Point(124, 83);
			this->txtBD->Name = L"txtBD";
			this->txtBD->Size = System::Drawing::Size(100, 20);
			this->txtBD->TabIndex = 8;
			// 
			// txtBO
			// 
			this->txtBO->Location = System::Drawing::Point(124, 57);
			this->txtBO->Name = L"txtBO";
			this->txtBO->Size = System::Drawing::Size(100, 20);
			this->txtBO->TabIndex = 7;
			// 
			// txtNumT
			// 
			this->txtNumT->Location = System::Drawing::Point(124, 31);
			this->txtNumT->Name = L"txtNumT";
			this->txtNumT->Size = System::Drawing::Size(100, 20);
			this->txtNumT->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnBin);
			this->tabPage1->Controls->Add(this->btnFibonacci);
			this->tabPage1->Controls->Add(this->lblResult);
			this->tabPage1->Controls->Add(this->btnFactorial);
			this->tabPage1->Controls->Add(this->tBFib);
			this->tabPage1->Controls->Add(this->lblNum);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(440, 285);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicios";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Palabra:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 338);
			this->Controls->Add(this->tbControl);
			this->Name = L"MyForm";
			this->tbControl->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tCEj1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tPEJ2->ResumeLayout(false);
			this->tPEJ2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnFibonacci_Click(System::Object^  sender, System::EventArgs^  e) {
		//Declaración Stopwatch
		Stopwatch^ stopWatch = gcnew Stopwatch();

		stopWatch->Start();
		//Fibonacci
		lblResult->Text = "Resultado: ";
		int num = System::Convert::ToInt32(tBFib->Text);
		Recursividad^ recursividadObj = gcnew Recursividad();
		lblResult->Text = lblResult->Text + System::Convert::ToString(recursividadObj->Fibonacci(num));
		stopWatch->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopWatch->Elapsed));
		//Leer Archivo
		StreamReader^streamReader = gcnew StreamReader("C://Tarea//prueba.csv");
		String^contenidoArchiv = streamReader->ReadToEnd();
		streamReader->Close();
		//Escribir archivo
		StreamWriter^ Streamwriter = gcnew StreamWriter("C://Tarea//prueba.csv");
		Streamwriter->WriteLine("Texto a escribir");
		Streamwriter->Close();

	
	}
	private: System::Void btnFactorial_Click(System::Object^  sender, System::EventArgs^  e) {
		lblResult->Text = "Resultado: ";
		int num = System::Convert::ToInt32(tBFib->Text);
		Recursividad^ recursividadObj = gcnew Recursividad();
		lblResult->Text = lblResult->Text + System::Convert::ToString(recursividadObj->Factorial(num));
	}
private: System::Void btnBin_Click(System::Object^  sender, System::EventArgs^  e) {
	lblResult->Text = "Resultado: ";
	int num = System::Convert::ToInt32(tBFib->Text);
	Recursividad^ recursividadObj = gcnew Recursividad();
	lblResult->Text = lblResult->Text + System::Convert::ToString(recursividadObj->Binario(num));
}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ stopWatch = gcnew Stopwatch();
	stopWatch->Start();
	lblRes->Text = "Resultado: ";
	int x = System::Convert::ToInt32(tBnum1->Text);
	int y = System::Convert::ToInt32(tbnum2->Text);
	Recursividad^ recursividadObj = gcnew Recursividad();
	lblRes->Text = lblRes->Text + System::Convert::ToString(recursividadObj->MultSum(x,y));
	stopWatch->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopWatch->Elapsed));

}
private: System::Void BtnPali_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ stopWatch = gcnew Stopwatch();
	stopWatch->Start();
	System::String^ Palabra = txtPali->Text;
	int n = 0;
	Recursividad^ recursividadObj = gcnew Recursividad();
	lblPali->Text = lblPali->Text + System::Convert::ToString(recursividadObj->PPali(Palabra, n));;
	stopWatch->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopWatch->Elapsed));
}
private: System::Void btnCambio_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ stopWatch = gcnew Stopwatch();
	stopWatch->Start();
	Recursividad^ recursividadObj = gcnew Recursividad();
	lblRes->Text = "Resultado: ";
	//int BaseDec = recursividadObj->CambioDEC(txtNumT->Text, System::Convert::ToInt32(txtBO->Text), 0);
	lblTransformado->Text = lblTransformado->Text + System::Convert::ToString(recursividadObj->CambioB(recursividadObj->CambioDEC(txtNumT->Text, System::Convert::ToInt32(txtBO->Text), 0), System::Convert::ToInt32(txtBD->Text)));
	stopWatch->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopWatch->Elapsed));
}
};
}
