#include<stdio.h>
int main()
{
    int a[50];
    int i,x;

    printf("enter the no of array item :");
    scanf("%d",&x);


    for(i=0;i<x;i++)
    {
        printf("enter the array eliments ");
    scanf("%d",&a[i]);

    }
    for(i=0;i<x;i++)
    {
        printf("\n the a[%d] arrary eliments is %d",i,a[i]);
    }

  int max=a[0];  //not showing problem
    for(i=0;i<x;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
        }
    }

    for(i=0;i<x;i++)
    {
        if(a[i]==max)
          {
             printf("\nmax address%d",i+1);
          }

    }
         return 0;
}
