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
	int num; // �Է¹��� ��
	//�Ҽ� == 1�� �ڽ��� ������ �ٸ� ����� ������ �ʴ°�.
	//���ܰ�� 1
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