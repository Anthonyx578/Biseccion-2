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
  private: System::Windows::Forms::Label^ em;
  private: System::Windows::Forms::Label^ x1;
  private: System::Windows::Forms::Label^ x2;







  private: System::Windows::Forms::Label^ me;

  private: System::Windows::Forms::Button^ ingresar;
  private: System::Windows::Forms::Button^ Calcular;
  private: System::Windows::Forms::DataGridView^ DatosTabla;
  private: System::Windows::Forms::Button^ Limpiar;





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
        this->em = (gcnew System::Windows::Forms::Label());
        this->x1 = (gcnew System::Windows::Forms::Label());
        this->x2 = (gcnew System::Windows::Forms::Label());
        this->me = (gcnew System::Windows::Forms::Label());
        this->ingresar = (gcnew System::Windows::Forms::Button());
        this->Calcular = (gcnew System::Windows::Forms::Button());
        this->DatosTabla = (gcnew System::Windows::Forms::DataGridView());
        this->Limpiar = (gcnew System::Windows::Forms::Button());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatosTabla))->BeginInit();
        this->SuspendLayout();
        // 
        // exponente
        // 
        this->exponente->Location = System::Drawing::Point(16, 81);
        this->exponente->Margin = System::Windows::Forms::Padding(4);
        this->exponente->Name = L"exponente";
        this->exponente->Size = System::Drawing::Size(132, 22);
        this->exponente->TabIndex = 1;
        // 
        // xi
        // 
        this->xi->Location = System::Drawing::Point(199, 81);
        this->xi->Margin = System::Windows::Forms::Padding(4);
        this->xi->Name = L"xi";
        this->xi->Size = System::Drawing::Size(132, 22);
        this->xi->TabIndex = 2;
        // 
        // xu
        // 
        this->xu->Location = System::Drawing::Point(371, 81);
        this->xu->Margin = System::Windows::Forms::Padding(4);
        this->xu->Name = L"xu";
        this->xu->Size = System::Drawing::Size(132, 22);
        this->xu->TabIndex = 3;
        // 
        // tol
        // 
        this->tol->Location = System::Drawing::Point(540, 81);
        this->tol->Margin = System::Windows::Forms::Padding(4);
        this->tol->Name = L"tol";
        this->tol->Size = System::Drawing::Size(132, 22);
        this->tol->TabIndex = 4;
        // 
        // em
        // 
        this->em->AutoSize = true;
        this->em->Location = System::Drawing::Point(16, 57);
        this->em->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->em->Name = L"em";
        this->em->Size = System::Drawing::Size(71, 16);
        this->em->TabIndex = 5;
        this->em->Text = L"Exponente";
        this->em->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // x1
        // 
        this->x1->AutoSize = true;
        this->x1->Location = System::Drawing::Point(217, 57);
        this->x1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->x1->Name = L"x1";
        this->x1->Size = System::Drawing::Size(16, 16);
        this->x1->TabIndex = 6;
        this->x1->Text = L"xi";
        
        // 
        // x2
        // 
        this->x2->AutoSize = true;
        this->x2->Location = System::Drawing::Point(381, 57);
        this->x2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->x2->Name = L"x2";
        this->x2->Size = System::Drawing::Size(20, 16);
        this->x2->TabIndex = 7;
        this->x2->Text = L"xu";
        // 
        // me
        // 
        this->me->AutoSize = true;
        this->me->Location = System::Drawing::Point(563, 57);
        this->me->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->me->Name = L"me";
        this->me->Size = System::Drawing::Size(21, 16);
        this->me->TabIndex = 8;
        this->me->Text = L"tol";
             // 
        // ingresar
        // 
        this->ingresar->Location = System::Drawing::Point(721, 78);
        this->ingresar->Margin = System::Windows::Forms::Padding(4);
        this->ingresar->Name = L"ingresar";
        this->ingresar->Size = System::Drawing::Size(100, 28);
        this->ingresar->TabIndex = 9;
        this->ingresar->Text = L"ingresar";
        this->ingresar->UseVisualStyleBackColor = true;
        this->ingresar->Click += gcnew System::EventHandler(this, &Form1::Ingresar_Click);
        // 
        // Calcular
        // 
        this->Calcular->Location = System::Drawing::Point(16, 236);
        this->Calcular->Margin = System::Windows::Forms::Padding(4);
        this->Calcular->Name = L"Calcular";
        this->Calcular->Size = System::Drawing::Size(100, 28);
        this->Calcular->TabIndex = 10;
        this->Calcular->Text = L"Calcular";
        this->Calcular->UseVisualStyleBackColor = true;
        this->Calcular->Click += gcnew System::EventHandler(this, &Form1::Calcular_Click);
        // 
        // DatosTabla
        // 
        this->DatosTabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->DatosTabla->Location = System::Drawing::Point(16, 272);
        this->DatosTabla->Margin = System::Windows::Forms::Padding(4);
        this->DatosTabla->MaximumSize = System::Drawing::Size(1019, 288);
        this->DatosTabla->MinimumSize = System::Drawing::Size(1019, 288);
        this->DatosTabla->Name = L"DatosTabla";
        this->DatosTabla->RowHeadersWidth = 51;
        this->DatosTabla->Size = System::Drawing::Size(1019, 288);
        this->DatosTabla->TabIndex = 11;
        // 
        // Limpiar
        // 
        this->Limpiar->Location = System::Drawing::Point(133, 236);
        this->Limpiar->Margin = System::Windows::Forms::Padding(4);
        this->Limpiar->Name = L"Limpiar";
        this->Limpiar->Size = System::Drawing::Size(100, 28);
        this->Limpiar->TabIndex = 12;
        this->Limpiar->Text = L"Limpiar";
        this->Limpiar->UseVisualStyleBackColor = true;
        this->Limpiar->Click += gcnew System::EventHandler(this, &Form1::Limpiar_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1051, 575);
        this->Controls->Add(this->Limpiar);
        this->Controls->Add(this->DatosTabla);
        this->Controls->Add(this->Calcular);
        this->Controls->Add(this->ingresar);
        this->Controls->Add(this->me);
        this->Controls->Add(this->x2);
        this->Controls->Add(this->x1);
        this->Controls->Add(this->em);
        this->Controls->Add(this->tol);
        this->Controls->Add(this->xu);
        this->Controls->Add(this->xi);
        this->Controls->Add(this->exponente);
        this->Margin = System::Windows::Forms::Padding(4);
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

    try
    {
        while (Numero <= Exponente) {
            //Creamos objetos
            TextBox^ Coeficientes = gcnew TextBox();
            Label^ literal = gcnew Label();


            Coeficientes->Location = System::Drawing::Point(x, y);
            Coeficientes->Name = "Coeficiente" + Numero;
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


            //a�adir los objetos creados 
            this->Controls->Add(Coeficientes);
            this->Controls->Add(literal);
            //Control de contadores
            Numero = Numero + 1;
            x = x + 80;
            ControlExponente = ControlExponente - 1;
        }//final del while
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Se produjo un error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    
//metodo para eliminar label 


} // final del evento para generar los botones

//Evento para hacer el metodo
       void EliminarTextBoxYLabel()
       {
           // Iterar sobre los controles del formulario
           for each (Control ^ control in this->Controls)
           {
               // Verificar si el control es un TextBox o un Label
               if (TextBox^ textBox = dynamic_cast<TextBox^>(control))
               {
                   // Verificar si el TextBox debe ser excluido de la eliminaci�n
                   if (textBox->Name != "exponente" && textBox->Name != "xi" && textBox->Name != "xu" && textBox->Name != "tol")
                   {
                       // Eliminar el TextBox y liberar los recursos
                       this->Controls->Remove(textBox);
                       delete textBox;
                   }
               }
               else if (Label^ label = dynamic_cast<Label^>(control))
               {
                   // Excluir el Label espec�fico de la eliminaci�n
                   if (label->Name != "em" && label->Name != "x1" && label->Name != "x2" && label->Name != "me" )
                   {
                       // Eliminar el Label y liberar los recursos
                       this->Controls->Remove(label);
                       delete label;
                   }
               }
           }
       }
Double CalcularFxi(Double Xi, Double exponente, array<Double>^ ValorCoeficientes) {
    Double Fxi = 0.0;
    Double Coeficiente = 0.0;
    int contador = ValorCoeficientes->Length;
    int Expo = exponente;
    Double FXI = 0.0;
    
    for (int b = 0; b < contador;b++) {
        if (Expo > 0) 
        {   
            Coeficiente = pow(Xi,Expo);
            Fxi = (ValorCoeficientes[b] * Coeficiente);

        }
        else
        {
            Fxi = (ValorCoeficientes[b]);
        }
        Expo = Expo - 1;
        //hacmeos la sumatoria final de FXI y FXU
        FXI = FXI + (Fxi);

    }
    FXI = Math::Round(FXI, 6, MidpointRounding::AwayFromZero);
    return FXI;
}// fin de funcion 

Double CalcularFxu(Double Xu, Double exponente, array<Double>^ ValorCoeficientes) {
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
    FXU = Math::Round(FXU, 6, MidpointRounding::AwayFromZero);
    return FXU;
};

Double CalcularXr(Double Xi, Double Xu) {
    Double XR = 0.0;

    XR = (Xi + Xu) / 2;
    return XR;
};

Double CalcularFxr(Double Xr, Double exponente, array<Double>^ ValorCoeficientes) {
    Double Fxr = 0.0;
    int contador = ValorCoeficientes->Length;
    int Expo = exponente;
    Double FXR = 0.0;

    for (int b = 0; b < contador; b++) {
        if (Expo > 0)
        {
            Fxr = (ValorCoeficientes[b] * pow(Xr, Expo));
        }
        else
        {
            Fxr = (ValorCoeficientes[b]);
        }
        Expo = Expo - 1;
        //hacmeos la sumatoria final de FXI y FXU
        FXR = FXR + (Fxr);

    }
    FXR = Math::Round(FXR, 6, MidpointRounding::AwayFromZero);

    return FXR;
}//Fin de Calcular F(xr)

Double Errores(Double XrActual, Double XrAnterior) {
    Double Error = fabs((XrActual - XrAnterior) * 100);
    Error = Math::Round(Error, 6, MidpointRounding::AwayFromZero);
    return Error;
};//Fin de Calcular errores
    
    

// Evento de calculo de Biseccion -------------------------------------------------------------------

private: System::Void Calcular_Click(System::Object^ sender, System::EventArgs^ e) {
    Double XI = Convert::ToDouble(xi->Text);
    Double XU = Convert::ToDouble(xu->Text);
    Double Tolerancia = Convert::ToDouble(tol->Text);
    Double Exponente = Convert::ToDouble(exponente->Text);
    Double Error = 0.0;
    int a = 0;
    int b = 0;
    int rowCount = DatosTabla->RowCount;
    int iteracion = 1;
    double XRA = 0.0;
    int fila = 0;

    array<Double>^ ValorCoeficientes = gcnew array<Double>(Exponente + 1);

    try
    {
        //while para obtener datos
        while (a <= Exponente)
        {
            TextBox^ DatoCoeficientes = (TextBox^)Controls->Find("Coeficiente" + a, true)[0];
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
            
            //Funcion que calcula F(xi)
            Double FXI = CalcularFxi(XI, Exponente, ValorCoeficientes);
            //Funcoin que calcula F(xu)
            Double FXU = CalcularFxu(XU, Exponente, ValorCoeficientes);
            if (FXI*FXU<0)
            {  
                DatosTabla->Rows->Add();

                DatosTabla->Rows[fila]->Cells[0]->Value = iteracion;
                DatosTabla->Rows[fila]->Cells[1]->Value = XI;
                DatosTabla->Rows[fila]->Cells[2]->Value = XU;
                DatosTabla->Rows[fila]->Cells[4]->Value = FXI;
                DatosTabla->Rows[fila]->Cells[5]->Value = FXU;
                // Calculamos Xr
                Double XR = CalcularXr(XI, XU);
                DatosTabla->Rows[fila]->Cells[3]->Value = XR;
                //Calculamos Fxr
                Double FXR = CalcularFxr(XR, Exponente, ValorCoeficientes);
                DatosTabla->Rows[fila]->Cells[6]->Value = FXR;
                //calcular el error

                if (iteracion > 1) {
                    Error = Errores(XR, XRA);
                }
                else
                {
                    Error = Errores(XR, XU);
                };


                if (FXI * FXR > 0) {
                    XI = XR;
                    DatosTabla->Rows[fila]->Cells[7]->Value = Error + "%";
                }
                else
                {
                    if (FXI * FXR == 0)
                    {
                        Error = Tolerancia;
                        DatosTabla->Rows[fila]->Cells[7]->Value = "Raiz";
                    }
                    else
                    {
                        XU = XR;
                        DatosTabla->Rows[fila]->Cells[7]->Value = Error + "%";
                    }

                }
                //Guardamos el valor de XR para que sea el anterior
                XRA = XR;
                b = b + 1;
                iteracion = iteracion + 1;
                fila = fila + 1;

            }
            else
            {
                Error = Tolerancia;
                MessageBox::Show("No se encuentr raiz en esos dos puntos.");
            }
            
        } while (Error > Tolerancia);
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Se produjo un error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    

}// fin del evento


private: System::Void Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
    exponente->Text = "";
    xi->Text = "";
    xu->Text = "";
    tol->Text = "";
    DatosTabla->Rows->Clear();
    DatosTabla->Columns->Clear();
    EliminarTextBoxYLabel();
}
};// end of class Form1
} // end of namespace CppCLRWinFormsProject

