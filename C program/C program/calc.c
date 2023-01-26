#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main()
{
	printf("\n PRN - 22030121110 \n");
	printf(" NAME - Khushi Goyal \n");

	char yes;
	yes = 'y';
	while (yes == 'y' || yes == 'Y')
	{

		char funct;
		printf("\n Enter the operator required (+ , - , * , / ) \n ");
		scanf("%c", &funct);

		if (funct == '+')
		{
			printf("\n\n    Addition- \n\n");
			addition();
		}

		else if (funct == '-')
		{
			printf("\n\n   Subtraction-\n\n");
			subtraction();
		}

		else if (funct == '*')
		{
            printf("\n\n multiplication :\n\n");
			multiplication();
		}

		else if (funct == '/')
		{
			printf("\n\n  Division-\n\n");
			division();
		}

		printf("\nCalculate Again (Y/N): ");
		scanf(" %c", &yes);
		getchar();
	}
	return 0;
}
