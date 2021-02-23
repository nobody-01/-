#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i=1;
	int n;
	int m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		m=i*m;
	printf("nµÄ½×³ËÎª%d\n",m);
	return 0;
}