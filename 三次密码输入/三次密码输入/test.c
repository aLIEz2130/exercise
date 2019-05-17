#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	char psw[10] = { 0 };
	int i = 0;
	for (i = 0; i < 3; ++i){
		printf("please input:", psw);
		scanf("%s", psw);
		if (strcmp("RBQ321", psw)==0){
			printf("登陆成功!\n");
				break;
		}
		else {
			printf("密码错误!\n");
		}
	}
	if (i == 3){
		printf("三次密码输入错误，退出系统!\n");
	}
	system("pause");
	return 0;
}