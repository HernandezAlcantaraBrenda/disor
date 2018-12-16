#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de Formulario
	/// </summary>
	public ref class Formulario : public System::Windows::Forms::Form
	{
	public:
		Formulario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Formulario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  mensaje;


	private: System::Windows::Forms::TextBox^  recorrido;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  resultado;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  transposicion;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->mensaje = (gcnew System::Windows::Forms::TextBox());
			this->recorrido = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->resultado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->transposicion = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"MENSAJE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 123);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"RECORRIDO";
			// 
			// mensaje
			// 
			this->mensaje->Location = System::Drawing::Point(198, 35);
			this->mensaje->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(458, 26);
			this->mensaje->TabIndex = 3;
			this->mensaje->TextChanged += gcnew System::EventHandler(this, &Formulario::mensaje_TextChanged);
			// 
			// recorrido
			// 
			this->recorrido->Location = System::Drawing::Point(182, 118);
			this->recorrido->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->recorrido->Name = L"recorrido";
			this->recorrido->Size = System::Drawing::Size(112, 26);
			this->recorrido->TabIndex = 4;
			this->recorrido->Text = L"0";
			this->recorrido->TextChanged += gcnew System::EventHandler(this, &Formulario::recorrido_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 92);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"RESULTADO";
			// 
			// resultado
			// 
			this->resultado->Location = System::Drawing::Point(68, 148);
			this->resultado->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->resultado->Multiline = true;
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(226, 118);
			this->resultado->TabIndex = 6;
			this->resultado->TextChanged += gcnew System::EventHandler(this, &Formulario::resultado_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(387, 123);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"TRANSPOSICION INVERSA";
			// 
			// transposicion
			// 
			this->transposicion->Location = System::Drawing::Point(378, 148);
			this->transposicion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->transposicion->Multiline = true;
			this->transposicion->Name = L"transposicion";
			this->transposicion->Size = System::Drawing::Size(224, 118);
			this->transposicion->TabIndex = 8;
			this->transposicion->TextChanged += gcnew System::EventHandler(this, &Formulario::transposicion_TextChanged);
			// 
			// Formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 314);
			this->Controls->Add(this->transposicion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->recorrido);
			this->Controls->Add(this->mensaje);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Formulario";
			this->Text = L"Formulario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mensaje_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			try{
				 proceso();
			}catch(int e){}
	}

	private: System::Void recorrido_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
				 proceso();
		}catch(int e){
		}
	 }
	
	
	void procesoInversa(){
					System::String^ elmensaje = resultado->Text;
					std::string te="";
					int rotacion = Convert::ToInt16(recorrido->Text);	
					for(int i=0;i< elmensaje->Length;i++){
						te=te+desCifrado(rotacion,elmensaje[i]);
					}
					mensaje ->Text =gcnew String(te.c_str());
	}
	void proceso(){
					System::String^ elmensaje = mensaje->Text;
					std::string te="";
					int rotacion = Convert::ToInt16(recorrido->Text);	
					for(int i=0;i< elmensaje->Length;i++){
						te=te+cifrado(rotacion,elmensaje[i]);
					}
					resultado ->Text =gcnew String(te.c_str());
					msclr::interop::marshal_context context;
					te=context.marshal_as<std::string>(elmensaje);
					te=string(te.rbegin(),te.rend());
					transposicion ->Text =gcnew String(te.c_str());
	}	 
	char cifrado(int recorrido,char caracter){
 				char abecedario[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','w','y','z'};
 				recorrido=recorrido%sizeof(abecedario);
 				for(int i=0; i < sizeof(abecedario) ;i++){
 					if(abecedario[i]==caracter){
 						return abecedario[(i+recorrido)%sizeof(abecedario)];
					}
				}
			return caracter;
		}

	char desCifrado(int recorrido,char caracter){
 	char abecedario[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','w','y','z'};
 	recorrido=recorrido%sizeof(abecedario);
 	for(int i=0; i < sizeof(abecedario) ;i++){
 		if(abecedario[i]==caracter){
 			if((i-recorrido)<0){
 				return abecedario[sizeof(abecedario)-(recorrido-i)];
			 }
			 return abecedario[(i-recorrido)];
		 }
	}
	return caracter;
 }
private: System::Void resultado_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
				 procesoInversa();
		}catch(int e){
		}
		 }
private: System::Void transposicion_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
