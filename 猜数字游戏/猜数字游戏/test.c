#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int q = 0;
	int a = 0;
	srand(time(NULL));
	a=rand() % 101 + 1;
	printf("������һ��1��100��������\n");
	while (1)	{
		scanf("%d", &q);
		if (q<1 || q>100){
			printf("����Ƿ������������룡����\n");
			continue;
		}
		if (q < a){
			printf("��С�ˣ�\n");
		}
		else if (q>a)		{
			printf("�´��ˣ�\n");
		}
		else	{
			printf("�¶���������\n");
			break;
		}
	}
	system("pause");
	return 0;
}