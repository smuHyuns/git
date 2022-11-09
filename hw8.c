#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>
#include<math.h>

void stde(double* arr)
{

	double average = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	double sum = 0;

	for (int i = 0; i < 5; i++)
		sum += pow((arr[i] - average), 2)/5;

	sum = sqrt(sum);

	printf("%f", sum);
}



int main(void)
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	scanf_s("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	stde(&arr);


	return 0;
}