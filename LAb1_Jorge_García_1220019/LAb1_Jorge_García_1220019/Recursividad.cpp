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
	System::String^ Muestra = "0123456789ABCDEF";
	if (n < Num->Length) {
		System::Char x = Num[((Num->Length) - 1 - n)];
		int y;
		if (x == Muestra[0]) {
			 y = 0;
		}
		else if (x == Muestra[1]) {
			y = (1 * Elevar(Base,n));
		}
		else if (x == Muestra[2]) {
			y = (2 * Elevar(Base, n));
		}
		else if (x == Muestra[3]) {
			y = (3 * Elevar(Base, n));
		}
		else if (x == Muestra[4]) {
			y = (4 * Elevar(Base, n));
		}
		else if (x == Muestra[5]) {
			y = (5 * Elevar(Base,n));
		}
		else if (x == Muestra[6]) {
			y = (6 * Elevar(Base, n));
		}
		else if (x == Muestra[7]) {
			y = (7 * Elevar(Base, n));
		}
		else if (x == Muestra[8]) {
			y = (8 * Elevar(Base, n));
		}
		else if (x == Muestra[9]) {
			y = (9 * Elevar(Base, n));
		}
		else if (x == Muestra[10]) {
			y = (10 * Elevar(Base, n));
		}
		else if (x == Muestra[11]) {
			y = (11 * Elevar(Base, n));
		}
		else if (x == Muestra[12]) {
			y = (12 * Elevar(Base, n));
		}
		else if (x == Muestra[13]) {
			y = (13 * Elevar(Base, n));
		}
		else if (x == Muestra[14]) {
			y = (14 * Elevar(Base, n));
		}
		else if (x == Muestra[15]) {
			y = (15 * Elevar(Base, n));
		}
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
int Recursividad::Elevar(int Base, int n) {
	if (n > 0) {
		return(Base*Elevar(Base, n - 1));
	}
	else {
		return(1);
	}
}