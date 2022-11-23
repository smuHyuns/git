#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void convCase(char *arr)
{
	// 모든 문자의 대소문자간 차의 크기는 같다.
	const int diff = 'a' - 'A';
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -=  32;

		else if (arr[i] >= 'A' && arr[i] <= 'Z')
			arr[i] += 32;
	}

}

int main(void)
{

	char arr[30];
	printf("Input> ");
	fgets(arr,sizeof(arr),stdin); // 문자열 입력
	convCase(arr); // 문자열 변환
	
	printf("OutPut> ");
	for (int i = 0; i < strlen(arr); i++)
		printf("%c", arr[i]);


	printf("\n\n");

	return 0;
}