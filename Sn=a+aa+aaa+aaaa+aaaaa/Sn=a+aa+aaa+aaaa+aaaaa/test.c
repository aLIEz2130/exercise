#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n = 0;
	int a = 0;
	int m = 0;
	printf("������һ��0��9������:");
	while (1){
		scanf("%d", &a);
		if (a>0 && a<9)
			break;
		else
		{
			printf("����Ƿ����������룡\n");
		}
	}
	for (int i = 1; i <= 5; i++){
			for (int j = 1; j <= 6 - i; j++){
				m = pow(10, i - 1);
				n += a*m;
			}
		}
		printf("%d\n", n);
	system("pause");
	return 0;
}