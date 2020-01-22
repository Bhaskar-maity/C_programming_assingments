#include<stdio.h>
void swap(int a,int b)
          {
              int c;
              c=a;
              a=b;
              b=c;
          }
int main()
{
    int a[100],n,i;
     printf("enter the no of array item :");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("enter the array eliments ");
    scanf("%d",&a[i]);

    }
     for(i=0;i<n;i++)
    {
        printf("\n the a[%d] arrary eliments are %d",i,a[i]);            //not working swap function
    }
    for(i=0;i<n;i++)
        swap(a[i],a[n-1-i]);
    for(i=0;i<n;i++)
        printf("\n after reversing  the a[%d] arrary eliments are %d",i,a[i]);
}
