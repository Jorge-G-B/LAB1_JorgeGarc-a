#include "Recursividad.h"

using namespace System::Diagnostics;

Recursividad::Recursividad()
{
}
int Recursividad::Fibonacci(int num) {
	if (num <= 1) 
	{
		return 1;
	}
	else 
	{
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}
int Recursividad::Factorial(int num) {
	if (num == 1) 
	{
		return 1;
	}
	else {
		return(num * Factorial(num - 1));
	}
}
System::String^ Recursividad::Binario(int num) {
	if (num > 0) {	
		if ((num % 2) != 0)
		{	
			return(Binario(num/2) + "1");
		}
		else
		{
			return(Binario(num / 2) + "0");
		}
	}
	else if (num == 1) {
		return("1");
	}
	else {
		return("0");
	}
}
int Recursividad::MultSum(int x, int y) {
	if (y > 0) 
	{	
		return(x + MultSum(x, y - 1));
	}
	else {
		return(0);
	}
}
bool Recursividad::PPali(System::String^ Palabra, int n) 
{
	System::Char Der = Palabra[n];
	System::Char Izq = Palabra[Palabra->Length - 1-n];
	if (Der == Izq) {
		if (n >= Palabra->Length - 1 - n) {
			return(true);
		}
		return(true && PPali(Palabra, n + 1));
	}
	else {
		return(false);
	}
}
int Recursividad::CambioDEC(System::String^ Num, int Base, int n) {
	if (n < Num->Length) {
		System::Char x = Num[((Num->Length) - 1 - n)];
		int y = (System::Convert::ToInt32(x)*(Base^n));
		return(y + (CambioDEC(Num, Base, n + 1)));
	}
	else
	{
		return(0);
	}	
}
System::String^ Recursividad::CambioB(int num, int Base) {
	if (num > 0) {
		int y = num % Base;
		if (Base < 11)
		{
		return(CambioB(num / Base, Base) + System::Convert::ToString(y));
		}
		else 
		{
			switch (y) 
			{
			case 10:
				return(CambioB(num / Base, Base) + "A");
				break;
			case 11:
				return(CambioB(num / Base, Base) + "B");
				break;
			case 12:
				return(CambioB(num / Base, Base) + "C");
				break;
			case 13:
				return(CambioB(num / Base, Base) + "D");
				break;
			case 14:
				return(CambioB(num / Base, Base) + "E");
				break;
			case 15:
				return(CambioB(num / Base, Base) + "F");
				break;
			default:
				return(CambioB(num / Base, Base) + System::Convert::ToString(y));
				break;
			}
		}
	}
	else 
	{
		int y = num % Base;
		if (Base < 11) 
		{
		return(System::Convert::ToString(y));
		}
		else {
			switch (y) 
			{
			case 10:
				return("A");
				break;
			case 11:
				return("B");
				break;
			case 12:
				return("C");
				break;
			case 13:
				return("D");
				break;
			case 14:
				return("E");
				break;
			case 15:
				return("F");
				break;
			default:
				return(System::Convert::ToString(y));
				break;
			}
		}
	}
}