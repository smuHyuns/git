#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct homework
{
	char name[30];
	char country[30];
	int population;
}hw;

void Clear(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	hw workout[3];
	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(workout[i].name, sizeof(workout[i].name), stdin);
		printf("Country> ");
		fgets(workout[i].country, sizeof(workout[i].country), stdin);
		printf("Population> ");
		scanf_s("%d",&workout[i].population);
		Clear();
	}
	
	for (int i = 0; i < 3; i++)
	{
		workout[i].name[strlen(workout[i].name) - 1] = '\0';
		workout[i].country[strlen(workout[i].country) - 1] = '\0';
	}

	printf("Printing the three cities: \n");
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i, workout[i].name, workout[i].country, workout[i].population);
	}

	return 0;
}