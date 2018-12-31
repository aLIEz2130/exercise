#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int tem = 0;
	tem = a;
	a = b;
	b = tem;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}