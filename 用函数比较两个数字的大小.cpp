#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Max(int x,int y)
{
	if(x>=y)
		return x;
	else
		return y;
}
int main()
{
	int num1=0;
	int num2=0;
	int max=0;
	scanf("%d%d",&num1,&num2);
	max=Max(num1,num2);
	printf("max=%d\n",max);
	return 0;
}