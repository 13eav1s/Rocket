//Файл для подключения конструктора WinApi

#include <Windows.h>
#include "MyForm.h"
using namespace Rocket;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}