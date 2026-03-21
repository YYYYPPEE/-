#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Stu//结构体定义
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)//比较名字
{
	return strcmp(((struct Stu*)e2)->name, ((struct Stu*)e1)->name);
}
int cmp_stu_by_age(const void* e1, const void* e2)//比较年龄
{
	return (((struct Stu*)e1)->age)-(((struct Stu*)e2)->age);
}
void Swap(char* a, char* b,int width)
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char tem = 0;
		tem = *a;
		*a = *b;
		*b = tem;
		a++;
		b++;
	}
}
	

void bubble_sort(void* base,int sz,int width,int(*cmp)( const void *e1,const void*e2))//万能冒泡排序
{
	int i = 0;//循环次数
	for (i = 0;i < sz-1;i++)
	{
		 int flag = 1;
		 for (int j = 0;j < sz - i-1;j++)
		 {
			 if (cmp((char*)base + j * width, (char*)base + (j+1) * width) > 0)
			 {
				 Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
				 flag = 0;
			 }
		 }
		 if (flag == 1)
		 {
			 break;
		 }
	}
	
}
void cmp_int(const void* e1, const void* e2)//整形大小比较
{
	return((*(int*)e1) - (*(int*)e2));

}
void test1()
{
	int arr[] = { 1,3,11,6,87,6,7,9,4 };
	int sz = 0;
	sz = sizeof arr / sizeof arr[0];
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for(int i=0;i<sz;i++)
	
	{
		printf("%d ", arr[i]);
	}
	 
}
void test2()
{
	
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof s[0], cmp_stu_by_name);
	for (int i = 0;i < sz;i++)

	{
		printf("%s\n", s[i].name);
	}
}
int main()
{
	test1();//整形排序
	printf("\n");
	test2();//结构体排序
	return 0;
}
