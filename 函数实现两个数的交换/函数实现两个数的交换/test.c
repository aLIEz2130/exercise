#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Exc(int a, int b){
	int tem;
	tem = a;
	a = b;
	b = tem;
	printf("%d %d", a, b);
}
int main(){
	int i = 0;
	int n = 0;
	printf("请输入两个数:\n");
	scanf("%d %d", &i, &n);
	Exc(i, n);
	system("pause");
	return 0;
}