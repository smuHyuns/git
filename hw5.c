#include<stdio.h>

void Esinchange(int num)
{
	if (num > 1)
	{
		Esinchange(num / 2);
		printf("%d", num % 2);
	}
	else
		printf("%d", num % 2);
}

int main(void)
{
	int num; // �Է¹��� ��
	printf("Please enter a number: ");
	scanf_s("%d", &num);

	//2������ ��ȯ
	//2�� �������� �������� 0or 1�� ���·� ��Ÿ�� �̸� ������
	//2�γ��������� ���� 0�̵� �ÿ� ����
	
	Esinchange(num);


	return 0;
}