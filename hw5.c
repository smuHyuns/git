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
	int num; // 입력받을 수
	printf("Please enter a number: ");
	scanf_s("%d", &num);

	//2진수로 변환
	//2로 나눴을때 나머지는 0or 1의 형태로 나타남 이를 더해줌
	//2로나누었을때 몫이 0이될 시에 종료
	
	Esinchange(num);


	return 0;
}