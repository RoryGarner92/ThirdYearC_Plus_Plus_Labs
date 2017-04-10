// PalindromeCheck.cpp : Defines the entry point for the console application.
//Rory Garner
//C00193506
//Software Development

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void pallyWallyCheck(int result) //checks if an integer is a pal
{
	int reverse = 0;
	int storeNum = result;

	while (result > 0)
	{
		int split = result % 10;
		reverse = reverse * 10 + split;
		result = result / 10;
	}
	if (storeNum == reverse)
	{
		printf("You got a pal");
	}
	else
	{
		printf("Not a pal");
	}
}
//******************************************************************************
int main()
{
	int input = 1;
	int result = 0;
	char breakOut = '\n';

	printf("Input your number and i'll tell you if its a Paldrome: ");
	input = getchar();
	while (input != breakOut)
	{
		if (input >= 47 && input <= 57)
		{
			result = result * 10 + (input - 48);
 		}
		input = getchar();
	}
	cout << result;
	pallyWallyCheck(result);
	printf("\n");
	system("pause");
	return 0;
}
