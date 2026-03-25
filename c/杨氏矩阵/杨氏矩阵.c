#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>
struct point {
	int x;
	int y;
};

struct point find_num(int arr[3][3] ,int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	struct point p = { -1,-1 };
	while (x <= r - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if(k>arr[x][y])
		{
			x++;
	    }
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}
	}
	return p;
}
int main()
{
 
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
struct point ret = find_num(arr, 3, 3, k);
printf("%d %d", ret.x, ret.y);

	return 0;
}
