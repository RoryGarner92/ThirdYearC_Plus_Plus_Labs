// ConsoleApplication4.cpp : Defines the entry point for the console application.
//Rory Garner
//C00193506
//Software Development

#include "stdafx.h"
#include <cstdlib>

char monthCheck(int result)
{
	//printf(result);
	if (result == 1)
	{
		printf("Jan");
	}
	else if (result == 2)
	{
		printf("Feb");
	}
	else if (result == 3)
	{
		printf("Mar");
	}
	else if (result == 4)
	{
		printf("Apr");
	}
	else if (result == 5)
	{
		printf("May");
	}
	else if (result == 6)
	{
		printf("Jun");
	}
	else if (result == 7)
	{
		printf("Jul");
	}
	else if (result == 8)
	{
		printf("Aug");
	}
	else if (result == 9)
	{
		printf("Sep");
	}
	else if (result == 10)
	{
		printf("Oct");
	}
	else if (result == 11)
	{
		printf("Nov");
	}
	else if (result == 12)
	{
		printf("Dec");
	}
	else 
	{
		printf("Thats not between 1 and 12 is it now ?");
	}
	return  0;
}
//**************************************************************************************************
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

