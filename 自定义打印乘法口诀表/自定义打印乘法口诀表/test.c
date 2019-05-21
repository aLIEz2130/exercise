#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Mutable(int n){
	int a = 0;
	int b = 0;
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%d ", b, a, a*b);
		}
		printf("\n");
	}
}
int main(){
	int i = 0;
	printf("要打印几乘几的乘法表：\n");
	scanf("%d",&i);
	Mutable(i);
	system("pause");
	return 0;
}