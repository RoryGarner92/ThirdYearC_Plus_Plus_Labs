// swopCase.cpp : Defines the entry point for the console application.
//Rory Garner
//C00193506
//Software Development

#include "stdafx.h"
#include <iostream>
//using namespace std;

int isLower(int inchar)
{
	if (inchar >= 65 && inchar <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//**********************************************************************************************
int isUpper(int inchar)
{
	if (inchar >= 97 && inchar <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//**********************************************************************************************
int toLower(int inchar)
{
	inchar = inchar - 32;
	return inchar;
}
//**********************************************************************************************
int toUpper(int inchar)
{
	inchar = inchar + 32;
	return inchar;
}
void userInterface()
{
	int inchar = 0;
	printf("Enter characters\n");
	printf("\n");
	while (inchar != 10) // we need to declare it as an int for EOF to work "ctrl + Z" & Enter
	{
		inchar = getchar();
		if (isLower(inchar) == 1)
		{
			char output;
			output = toUpper(inchar);
			printf("%c", output, "\n");
		}
		else if (isUpper(inchar) == 1)
		{
			char output;
			output = toLower(inchar);
			printf("%c", output, "\n");
		}
	}
	printf("\n");
	printf("Return/Enter to continue or any other key to exit \n");
		inchar = getchar();
	if (inchar == 10)
	{
		userInterface();
	}
	else
	{
		printf("\n");
		printf("bye so\n");
	}
}
//**********************************************************************************************
int main() {
	userInterface();
	system("pause");
}
