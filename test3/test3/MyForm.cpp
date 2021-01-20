#include "MyForm.h"
//#include<iostream>
//#include<fstream>

//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
//ifstream fin("output3.txt");
[STAThread]
int main(cli::array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	test3::MyForm form;
	bool f = true;
	for (;f;) {
		Application::Run(%form);
		f = form.contin;
	}
	return 0;
}