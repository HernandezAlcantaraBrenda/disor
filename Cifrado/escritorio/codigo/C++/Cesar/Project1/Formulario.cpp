#include "Formulario.h"

using namespace Project1;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Formulario form;	
	Application::Run(%form);
}