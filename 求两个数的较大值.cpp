#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num1=0;
	int num2=0;
	scanf("%d%d",&num1,&num2);
	if(num1>=num2)
		printf("�ϴ�ֵ�ǣ�%d\n",num1);
	else
		printf("�ϴ�ֵ�ǣ�%d\n",num2);
	return 0;
}