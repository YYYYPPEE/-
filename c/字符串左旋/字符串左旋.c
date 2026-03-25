#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

void left_rorate(char arr[], int k)
{
	int i = 0;
	char ret = 0;
	int len = strlen(arr);
	for (i = 0;i < k;i++)
	{
		ret = arr[0];
		int j = 0;
		for (j = 0;j < len-1;j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = ret;
	}
}
int main()
{
	char arr[] = { "abcdef" };
	int k = 0;
	scanf("%d", &k);
	left_rorate(arr, k);
	printf("%s\n", arr);
	
	return 0;
}
