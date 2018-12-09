#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			c = a*b;
			printf("%d*%d=%d  ", b, a, c);
			if (a == b)
			{
				break;
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}