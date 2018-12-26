#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= 6; i++){
		for (j = 0; j <= 2 * i; j++){
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= 5; i++){
		for (j = 0; j <= 10 - 2 * i; j++){
			printf("*");
		}
		printf("\n");
	}
    system("pause");
	return 0;
}