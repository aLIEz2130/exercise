#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int q = 0;
	int a = 0;
	srand(time(NULL));
	a=rand() % 101 + 1;
	printf("请输入一个1到100的整数：\n");
	while (1)	{
		scanf("%d", &q);
		if (q<1 || q>100){
			printf("输入非法！请重新输入！！！\n");
			continue;
		}
		if (q < a){
			printf("猜小了！\n");
		}
		else if (q>a)		{
			printf("猜大了！\n");
		}
		else	{
			printf("猜对辣！！！\n");
			break;
		}
	}
	system("pause");
	return 0;
}