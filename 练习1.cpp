#define _CRT_SECURE_NO_WARNINGS 1

////��ϰ1.1��ӡ����
//
//#include<stdio.h>
//
//int main()
//{
//	printf("��ʼ����\n");
//	return 0;
//}
//
////�ʼǣ�printf������ӡ���֣�"xxxx\n"��




//��ϰ1.2��ӡÿ�����͵Ĵ�С

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
////�ʼǣ�ctrl c/v���ܹ�ֱ�Ӹ���/ճ��һ�д���
////sizeof�����������͵Ĵ�С����λΪ�ֽڣ�byte������8���أ�bite��



//1.3�����������ֵĺ�

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
////�ʼ�scanf������������Ҫ����������Ϊ�������������ݶ�Ҫ�ӡ���



////��ϰ1.4
//#include <stdio.h>
//int main()
//{
//	printf ("%c\n",'\'');
//	printf ("%s\n","\"");
//	return 0;
//}




//��ϰ1.5
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n",strlen("abcdef"));
//	printf("%d\n",strlen("c:test\328\test.c"));
//	return 0;
//}
////�ʼ�strlen������Ҫͷ�ļ�string.h

////��ϰ1.6
//#include<stdio.h>
//int main()
//{
//	int ans=0;
//	printf("Ҫ����Ŭ��ѧϰ��\n");
//	scanf("%d",&ans);
//	if(ans==0)
//		printf("��Ϊ����/n");
//	else
//		printf("�µĻ���/n");
//	return 0;
//}
////scanf�������ݲ�Ҫ����\n
