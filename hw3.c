#include<stdio.h>
int main(void)

{

	for (int i = 0; i < 5; i++)
	{
		// 43210
		for (int j = 0; j < 4 - i; j++)
			printf(" ");

		// 1 3 5 7 9 
		for (int c = 0; c < 2*i + 1 ; c++)
			printf("*");

		for (int j = 0; j < 4 - i; j++)
			printf(" ");

		printf("\n");
	}


	return 0;
}