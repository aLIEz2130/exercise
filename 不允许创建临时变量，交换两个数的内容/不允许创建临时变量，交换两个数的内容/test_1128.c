#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}