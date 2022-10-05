#include<stdio.h>

int DivideNumber(int num)
{
	int i;
	if (num == 1)
		return -1;
	else
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
				return -1;
		}
		return 1;
	}
}

int main(void)
{
	int num; // 입력받을 수
	//소수 == 1과 자신을 제외한 다른 약수를 가지지 않는것.
	//예외경우 1
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	int decision;
	decision = DivideNumber(num);
	if (decision == 1)
		printf("It is a prime number\n");
	else if (decision == -1)
		printf("It is not a prime number\n");



	return 0;
}