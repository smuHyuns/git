#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>


int main(void)
{

	int arr1[6] = {1,2,3,4,5,6};
	int arr2[6] = {7,8,9,10,11,12};
	int temp;

	printf("arr1: ");
	printf("%d %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);

	printf("arr2: ");
	printf("%d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	int *ptr1 = &arr1;
	int *ptr2 = &arr2;

	for (int i = 0; i < 6; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2++;
	}

	printf("\nafter swap\n");
	printf("arr1: ");
	printf("%d %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);

	printf("arr2: ");
	printf("%d %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);
	
	return 0;
}