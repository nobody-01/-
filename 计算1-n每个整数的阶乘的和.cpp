#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n;
	int i=1;
	int ret=1;
	int sum=0;
	scanf ("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret=ret*i;
		sum=sum+ret;
	}
	printf ("sum=%d\n",sum);
	return 0;
}