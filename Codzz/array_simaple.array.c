#include<stdio.h>
int main()
{
    int n=50;
    int a[n];
    int x,i;
    printf("enter the no of array");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    scanf("%d",&a[i]);

    for(i=0;i<x;i++)
       {printf("the a[%d] array is = %d",i,a[i]);
        printf("\n");
       }
    return 0;

}
