#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[], int sz)//冒泡排序
{
	
	int tem = 0;
	for (int i= 0;i < sz - 1;i++)//趟数
	{
		int is_sorted = 1;//假设排好序
		for (int j= 0;j < sz - 1 - i;j++) //执行一趟排序
		{
			if (arr[j]>arr[j+1])//交换
			{
				tem =arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				is_sorted = 0;//改为未排序
			}
			
		}//一趟执行完
		if (is_sorted == 1)//查看标志
			break;
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,1,2 };
	int sz = sizeof(arr) / sizeof(arr)[0];
	/*bubble_sort(arr,sz);*/ //调用冒泡排序
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
