#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
#include "division.h"
#include "subtraction.h"

int main()
{
	printf("\n PRN - 22030121121 \n");
	printf(" NAME - Kushal Kumawat \n");
	printf("     #*************************************************************************************************************  \n");
	printf("     #  _      _    _          _       __________      _          _            __            _                    #  \n");
	printf("     # | |    / /  | |        | |     / _________|    | |        | |          /  \\          | |                   #  \n");
	printf("     # | |   / /   | |        | |    / /              | |        | |         / /\\ \\         | |                   #  \n");
	printf("     # | |  / /    | |        | |   | |               | |        | |        / /  \\ \\        | |                   #  \n");
	printf("     # | | / /     | |        | |    \\ \\_________     | |________| |       / /    \\ \\       | |                   #  \n");
	printf("     # | |/ /      | |        | |     \\__________ \\   |  ________  |      / /______\\ \\      | |                   #  \n");
	printf("     # |   /       | |        | |                \\ \\  | |        | |     /  ________  \\     | |                   #  \n");
	printf("     # | |\\ \\      | |        | |                | |  | |        | |    / /          \\ \\    | |                   #  \n");
	printf("     # | | \\ \\     | |________| |     __________/ /   | |        | |   / /            \\ \\   | |_____________      #  \n");
	printf("     # |_|  \\_\\    |____________|    |___________/    |_|        |_|  /_/              \\_\\  |_______________|     #  \n");
	printf("     #____________________________________________________________________________________________________________#  \n");
	printf("     # Copyright of Kushal Creations, 2024                                                                       #  \n");
	printf("     # https://kushalcreations.github.io                                                                          #  \n");
	printf("     # https://www.youtube.com/kushalcreations                                                                    #  \n");
	printf("     #                                                                                                            #  \n");
	printf("     # Please note that this code can be improved by using more functions. It is not programmed to cater          #  \n");
	printf("     # for all situations, but to be used as a learning programme of calculator.                                  #  \n");
	printf("     #                                                                                                            #  \n");
	printf("     # This code is provided for educational purposes only. Do good. Be Ethical.                                  #  \n");
	printf("     #                                                                                                            #  \n");
	printf("     ##############################################################################################################  \n");

	printf("\n                   		       +-------------------CALCULATOR----------------+\n");

	char yes;
	yes = 'y';
	while (yes == 'y' || yes == 'Y')
	{

		char opt;
		// take an operator
		printf("\n                          Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");
		scanf("%c", &opt);

		if (opt == '+')
		{

			// addition function
			printf("\n\n    Addition- \n\n");
			add();
			// printf("%d",add());
		}

		else if (opt == '-')
		{

			// subtraction function
			printf("\n\n   Subtraction-\n\n");
			subtraction();
		}

		else if (opt == '*')
		{

			int a, b;
			printf("          Enter two integers: \n");
			scanf("%d %d", &a, &b);
			// multiplication function
			printf("           %.2f", multiply(a, b));
		}

		else if (opt == '/')
		{

			// division function
			printf("\n\n  Division-\n\n");
			division();
		}

		printf("\n      Calculate Again (Y/N): ");
		scanf(" %c", &yes);
		getchar();
	}
	return 0;
}
