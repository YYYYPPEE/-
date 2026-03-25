#include <stdio.h>

int main() {
   int n=0;
   int i=0;
   int j=0;
   scanf("%d",&n);
   int arr[30][30]={0};
   for(i=0;i<n;i++)
   {
    for(j=0;j<=i;j++)
    {
        if(j==0||j==i)
        {
            arr[i][j]=1;
        }
        if(i>=2&&j>=1)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }

    }
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<=i;j++)
    {
        printf("%5d",arr[i][j]);
    }
    printf("\n");
   }
    
    return 0;
}
