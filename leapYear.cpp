// leapYear.cpp : Defines the entry point for the console application.
// Rory Garner
// C00193506
// SoftWare Development

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void leapYear(int number)
{
	cout << number<<"\n";
	if (number == 0)
	{
		printf("bye bye so !");
	}
	else if (number % 4 == 0 && (number % 100 != 0 || number % 400 == 0))
	{
		printf("is a leap year");
	}
	else 
	{
		printf("is not a leap year");
	}
}
//*****************************************************************************
int main()
{
	int number = 0;
	int result = 1;
	char breakOut = '\n';

	while (result != 0)
	{
		printf("Enter a year to check or 0 to exit \n");
		result = result - result;
		number = getchar();
		while (number != breakOut) //newline breaks out the loop
		{
			if (number >= 47 && number <= 57) 
				{
					result = result * 10 + (number - 48);
				}
			number = getchar();
		}
		printf("\n");
		leapYear(result);
		printf("\n");
	}
	system("pause");
}
