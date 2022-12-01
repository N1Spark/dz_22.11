#define FIRSTDLL_API extern "C" __declspec(dllexport)

#include "Header.h"


FIRSTDLL_API double Sum(double a, double b)
{
	double c = a + b;
	return c;
}
FIRSTDLL_API double Min(double a, double b)
{
	double c = a - b;
	return c;
}
FIRSTDLL_API double Mult(double a, double b)
{
	double c = a * b;
	return c;
}
FIRSTDLL_API double Div(double a, double b)
{
	double c = a / b;
	return c;
}