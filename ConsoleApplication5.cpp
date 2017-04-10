// ConsoleApplication5.cpp : Defines the entry point for the console application.
// Rory Garner
// C00193506
//Software Development

#include "stdafx.h"
#include <cstdlib>

int monthCheck(int result)
{
	switch (result)
	{
	case 1:
		printf("Jan!");
		break;
	case 2:
		printf("Feb!");
		break;
	case 3:
		printf("Mar!");
		break;
	case 4:
		printf("Apr!");
		break;
	case 5:
		printf("May!");
		break;
	case 6:
		printf("Jun!");
		break;
	case 7:
		printf("Jul!");
		break;
	case 8:
		printf("Aug!");
		break;
	case 9:
		printf("Sep!");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov!");
		break;
	case 12:
		printf("Dec!");
		break;
	default:
		printf("That is not a valid input") ;
	}
	return  0;
}
//**************************************************************************************
int main()
{
	int input = 0;
	int result = 0;
	char breakOut = '\n';

	printf("Pick a nimber between 1 and 12: ");
	input = getchar();
	while (input != breakOut) //newline breaks out the loop
	{
		result = result * 10 + (input - 48);
		input = getchar();
	}
	monthCheck(result);
	printf("\n");
	system("pause");
	return 0;
}

