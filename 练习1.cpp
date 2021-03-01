#define _CRT_SECURE_NO_WARNINGS 1

////练习1.1打印函数
//
//#include<stdio.h>
//
//int main()
//{
//	printf("开始修行\n");
//	return 0;
//}
//
////笔记：printf函数打印文字（"xxxx\n"）




//练习1.2打印每种类型的大小

//#include<stdio.h>
//
//int main()
//{
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(short));//2
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
//	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
//	printf("%d\n",sizeof(long double));//8
//
//	return 0;
//}
////笔记：ctrl c/v，能够直接复制/粘贴一行代码
////sizeof函数计算类型的大小，单位为字节（byte），即8比特（bite）



//1.3计算两个数字的和

//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int sum;
//	scanf("%d%d",&a,&b);
//	sum=a+b;
//	printf("sum=%d",sum);
//	return 0;
//}
////笔记scanf函数输入内容要带“”，即为输入和输出的内容都要加“”



////练习1.4
//#include <stdio.h>
//int main()
//{
//	printf ("%c\n",'\'');
//	printf ("%s\n","\"");
//	return 0;
//}




//练习1.5
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n",strlen("abcdef"));
//	printf("%d\n",strlen("c:test\328\test.c"));
//	return 0;
//}
////笔记strlen函数需要头文件string.h

////练习1.6
//#include<stdio.h>
//int main()
//{
//	int ans=0;
//	printf("要继续努力学习吗？\n");
//	scanf("%d",&ans);
//	if(ans==0)
//		printf("无为困厄/n");
//	else
//		printf("新的机会/n");
//	return 0;
//}
////scanf函数内容不要带有\n
