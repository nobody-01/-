#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num1=0;
	int num2=0;
	scanf("%d%d",&num1,&num2);
	if(num1>=num2)
		printf("较大值是：%d\n",num1);
	else
		printf("较大值是：%d\n",num2);
	return 0;
}