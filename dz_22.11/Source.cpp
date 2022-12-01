#include <iostream>
#include <Windows.h>
#include <tchar.h>
using namespace std;

typedef double (*fptr) (double, double);

int main()
{
	HINSTANCE lib_file = LoadLibrary(TEXT("dz_22.11_li.dll"));
	fptr Sum = (fptr)GetProcAddress(lib_file, "Sum");
	fptr Min = (fptr)GetProcAddress(lib_file, "Min");
	fptr Div = (fptr)GetProcAddress(lib_file, "Div");
	fptr Mult = (fptr)GetProcAddress(lib_file, "Mult");
	int a, b, r = 0;
	char c;
	cin >> a;
	cin >> c;
	cin >> b;
	if (c == '+')
		cout << Sum(a, b) << endl;
	else if (c == '-')
		cout << Min(a, b) << endl;
	else if (c == '*')
		cout << Mult(a, b) << endl;
	else if (c == '/')
		cout << Div(a, b) << endl;
	FreeLibrary(lib_file);
}