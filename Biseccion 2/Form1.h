#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include <cmath>


namespace CppCLRWinFormsProject {

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

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

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

  private: System::Windows::Forms::TextBox^ exponente;
  private: System::Windows::Forms::TextBox^ xi;
  private: System::Windows::Forms::TextBox^ xu;
  private: System::Windows::Forms::TextBox^ tol;




  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Button^ ingresar;
  private: System::Windows::Forms::Button^ Calcular;
  private: System::Windows::Forms::DataGridView^ DatosTabla;





  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->exponente = (gcnew System::Windows::Forms::TextBox());
        this->xi = (gcnew System::Windows::Forms::TextBox());
        this->xu = (gcnew System::Windows::Forms::TextBox());
        this->tol = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->ingresar = (gcnew System::Windows::Forms::Button());
        this->Calcular = (gcnew System::Windows::Forms::Button());
        this->DatosTabla = (gcnew System::Windows::Forms::DataGridView());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatosTabla))->BeginInit();
        this->SuspendLayout();
        // 
        // exponente
        // 
        this->exponente->Location = System::Drawing::Point(12, 66);
        this->exponente->Name = L"exponente";
        this->exponente->Size = System::Drawing::Size(100, 20);
        this->exponente->TabIndex = 1;
        // 
        // xi
        // 
        this->xi->Location = System::Drawing::Point(149, 66);
        this->xi->Name = L"xi";
        this->xi->Size = System::Drawing::Size(100, 20);
        this->xi->TabIndex = 2;
        // 
        // xu
        // 
        this->xu->Location = System::Drawing::Point(278, 66);
        this->xu->Name = L"xu";
        this->xu->Size = System::Drawing::Size(100, 20);
        this->xu->TabIndex = 3;
        // 
        // tol
        // 
        this->tol->Location = System::Drawing::Point(405, 66);
        this->tol->Name = L"tol";
        this->tol->Size = System::Drawing::Size(100, 20);
        this->tol->TabIndex = 4;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(12, 46);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(58, 13);
        this->label1->TabIndex = 5;
        this->label1->Text = L"Exponente";
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(163, 46);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(14, 13);
        this->label2->TabIndex = 6;
        this->label2->Text = L"xi";
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(286, 46);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(18, 13);
        this->label3->TabIndex = 7;
        this->label3->Text = L"xu";
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(422, 46);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(18, 13);
        this->label4->TabIndex = 8;
        this->label4->Text = L"tol";
        // 
        // ingresar
        // 
        this->ingresar->Location = System::Drawing::Point(541, 63);
        this->ingresar->Name = L"ingresar";
        this->ingresar->Size = System::Drawing::Size(75, 23);
        this->ingresar->TabIndex = 9;
        this->ingresar->Text = L"ingresar";
        this->ingresar->UseVisualStyleBackColor = true;
        this->ingresar->Click += gcnew System::EventHandler(this, &Form1::Ingresar_Click);
        // 
        // Calcular
        // 
        this->Calcular->Location = System::Drawing::Point(12, 192);
        this->Calcular->Name = L"Calcular";
        this->Calcular->Size = System::Drawing::Size(75, 23);
        this->Calcular->TabIndex = 10;
        this->Calcular->Text = L"Calcular";
        this->Calcular->UseVisualStyleBackColor = true;
        this->Calcular->Click += gcnew System::EventHandler(this, &Form1::Calcular_Click);
        // 
        // DatosTabla
        // 
        this->DatosTabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->DatosTabla->Location = System::Drawing::Point(12, 221);
        this->DatosTabla->MaximumSize = System::Drawing::Size(764, 234);
        this->DatosTabla->MinimumSize = System::Drawing::Size(764, 234);
        this->DatosTabla->Name = L"DatosTabla";
        this->DatosTabla->Size = System::Drawing::Size(764, 234);
        this->DatosTabla->TabIndex = 11;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(788, 467);
        this->Controls->Add(this->DatosTabla);
        this->Controls->Add(this->Calcular);
        this->Controls->Add(this->ingresar);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->tol);
        this->Controls->Add(this->xu);
        this->Controls->Add(this->xi);
        this->Controls->Add(this->exponente);
        this->Name = L"Form1";
        this->Text = L"Form1";
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatosTabla))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.

 


  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}

//Al pulsar el Boton Ingresar
private: System::Void Ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
    int Exponente = Convert::ToInt32(exponente->Text);
    int Numero = 0;
    int x = 34;
    int y = 162;
    int ControlExponente = Exponente;
    while (Numero <= Exponente) {
        //Creamos objetos
        TextBox^ Coeficientes = gcnew TextBox();
        Label^ literal = gcnew Label();


        Coeficientes->Location = System::Drawing::Point(x, y);
        Coeficientes->Name = "Coeficiente"+Numero;
        Coeficientes->Size = System::Drawing::Size(60, 20);
        Coeficientes->TabIndex = Numero;

        literal->AutoSize = true;
        literal->Location = System::Drawing::Point(x, y - 15);
        literal->Name = L"label1";
        literal->Size = System::Drawing::Size(208, 13);

        //Condicion para los literales
        if (ControlExponente == 0) {
            literal->Text = L"Termino Independiente";
        }
        else {
            literal->Text = L"X^" + ControlExponente;
        };


        //añadir los objetos creados 
        this->Controls->Add(Coeficientes);
        this->Controls->Add(literal);
        //Control de contadores
        Numero = Numero + 1;
        x = x + 80;
        ControlExponente = ControlExponente - 1;
    }//final del while

} // final del evento para generar los botones

//Evento para hacer el metodo

double CalcularFxi(Double Xi, Double exponente, array<Double>^ ValorCoeficientes) {
    Double Fxi = 0.0;
    int contador = ValorCoeficientes->Length;
    int Expo = exponente;
    Double FXI = 0.0;
    
    for (int b = 0; b < contador;b++) {
        if (Expo > 0)
        {
            Fxi = (ValorCoeficientes[b] * pow(Xi, Expo));
        }
        else
        {
            Fxi = (ValorCoeficientes[b]);
        }
        Expo = Expo - 1;
        //hacmeos la sumatoria final de FXI y FXU
        FXI = FXI + (Fxi);

    }
    return FXI;
}// fin de funcion 

double CalcularFxu(Double Xu, Double exponente, array<Double>^ ValorCoeficientes) {
    Double Fxu = 0.0;
    int contador = ValorCoeficientes->Length;
    int Expo = exponente;
    Double FXU = 0.0;

    for (int b = 0; b < contador; b++) {
        if (Expo > 0)
        {
            Fxu = (ValorCoeficientes[b] * pow(Xu, Expo));
        }
        else
        {
            Fxu = (ValorCoeficientes[b]);
        }
        Expo = Expo - 1;
        //hacmeos la sumatoria final de FXI y FXU
        FXU = FXU + (Fxu);

    }
    return FXU;
};

double CalcularXr(Double Xi, Double Xu) {
    Double XR = 0.0;

    XR = (Xi + Xu) / 2;
    return XR;
};
    

// Evento de calculo de Biseccion -------------------------------------------------------------------

private: System::Void Calcular_Click(System::Object^ sender, System::EventArgs^ e) {
    Double XI = Convert::ToDouble(xi->Text);
    Double XU = Convert::ToDouble(xu->Text);
    Double Tolerancia = Convert::ToDouble(tol->Text);
    Double Exponente = Convert::ToDouble(exponente->Text);
    int a = 0;
    int b = 0;
    int rowCount = DatosTabla->RowCount;

    array<Double>^ ValorCoeficientes = gcnew array<Double>(Exponente + 1);
    //while para obtener datos
    while (a <= Exponente)
    {   
        TextBox^ DatoCoeficientes = (TextBox^)Controls->Find("Coeficiente" +a, true)[0];
        Double Datos = Convert::ToDouble(DatoCoeficientes->Text);
        ValorCoeficientes[a] = Datos;
        a = a + 1;
    };//Fin del while para obtener datos

    //Creamos tabla
    DatosTabla->ColumnCount = 8;

    DatosTabla->Columns[0]->Name = "Interacciones";
    DatosTabla->Columns[1]->Name = "XI";
    DatosTabla->Columns[2]->Name = "XU";
    DatosTabla->Columns[3]->Name = "XR";
    DatosTabla->Columns[4]->Name = "F(XI)";
    DatosTabla->Columns[5]->Name = "F(XU)";
    DatosTabla->Columns[6]->Name = "F(XR)";
    DatosTabla->Columns[7]->Name = "ERROR";
    //Metodo de biseccion 
    do {
     //---------------------------------------------------------------------------------------------------
        DatosTabla->Rows[0]->Cells[1]->Value = XI;
        DatosTabla->Rows[0]->Cells[2]->Value = XU;


        //Funcion que calcula F(xi)
        Double FXI = CalcularFxi(XI, Exponente, ValorCoeficientes);
        DatosTabla->Rows[0]->Cells[4]->Value = FXI;
        //Funcoin que calcula F(xu)
        Double FXU= CalcularFxu(XU,Exponente,ValorCoeficientes);
        DatosTabla->Rows[0]->Cells[5]->Value = FXU;
        Double XR = CalcularXr(XI,XU);
        DatosTabla->Rows[0]->Cells[3]->Value = XR;











        DatosTabla->Rows->Add();
        b = b + 1;
    } while (b < Tolerancia);

}// fin del evento








};// end of class Form1
} // end of namespace CppCLRWinFormsProject

