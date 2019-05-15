#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 1;
	int mid = 0;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>k) {
			right = mid - 1;
		}
		else if (arr[mid] < k){
			left = mid + 1;
		}
		else break;
	}
	if (left <= right){
		printf("找到了，下标是%d:", mid);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}