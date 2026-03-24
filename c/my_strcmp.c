#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char*str1, const char* str2)
{
	assert(str1 != NULL);   // 如果 str1 是空指针，直接报错停止
	assert(str2 != NULL);   // 如果 str2 是空指针，直接报错停止
	
		while (*str1 == *str2)
		{
			if (*str1 == '\0')
			{
				return 0;
			}
			str1++;
			str2++;
		}
		return(*str1 > *str2) ? 1 : -1;
	
	
}
int main()
{
	char arr1[20] = "zhangsan";
	char arr2[20] = "wangwu";
	int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf(">\n");
	}
	else if (ret == 0)
	{
		printf("=\n");
	}
	else
	{
		printf("<\n");
	}
	
	
	return 0;
}
