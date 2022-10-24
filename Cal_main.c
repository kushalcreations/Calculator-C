#include <stdio.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"

int main()
{

	char con;
	con = 'y';

	printf("\t\t\t\t\t\tCalculator\n\t\t\t\tMade by Ila Shukla | BCA Sem I | Division C\n\n");

	// iilaa dak while loop me kabhi bhi ";" ye nhi aye ga kuki ye koi statement nhi h ye function h lopp me dalne wala issliye kud se while loop ke aage se iss ko hata de
	while (con == 'y' || con == 'Y')
		;
	// iilaa 'char op' ye bhi tune while loop ke ander nhidala tha mene dal diya chinta mat kr issliye vo statement nhi le rha tha okyee
	{
		char op;
		printf("You would like to perform which operation; Addition, Subtraction, Multiplication or Division?\n");
		printf("\nEnter +,-,x or /  : ");
		scanf("%c", &op);

		if (op == '+')
		{
			printf("\n\nAddition-\n\n");
			addition();
		}

		else if (op == '-')
		{
			printf("\n\nSubtraction-\n\n");
			subtraction();
		}

		else if (op == 'x')
		{
			printf("\n\nMultiplication-\n\n");
			multiplication();
		}

		else if (op == '/')
		{
			printf("\n\nDivision-\n\n");
			division();
		}

		// iilla ye jo tune %c liikha h issme space dal de kud se ye asa ana chiyee sacnf(" %c",&con); okyee baki sub sahi h mene dak liye ab chala ke kr dak le chal jaye ga
		printf("\n\nDo you want to restart?");
		scanf("%c", &con);
		getchar();
	}
	return 0;
}
