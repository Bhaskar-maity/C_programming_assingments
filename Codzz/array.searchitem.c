#include<stdio.h>
int main()
{
    int a[20];
    int i,n,item;
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
    printf("\n item you want to search");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
            printf("\n item's index %d",i);

    }
    return 0;
}
