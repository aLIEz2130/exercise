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
			printf("��½�ɹ�!\n");
				break;
		}
		else {
			printf("�������!\n");
		}
	}
	if (i == 3){
		printf("����������������˳�ϵͳ!\n");
	}
	system("pause");
	return 0;
}