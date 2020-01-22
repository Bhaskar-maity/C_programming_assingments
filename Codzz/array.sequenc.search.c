#include<stdio.h>
int main()
{
    int a[20],mid,lb,ub,i,n,item;
    printf("enter the number of eliment");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        printf("enter the array eliments ");
    scanf("%d",&a[i]);

    }
    printf("item you want to search");
    scanf("%d",&item);
    lb=0;ub=n-1;
    while(ub>lb)
    {
        mid = (lb+ub)/2;    //loop contineuing infinitely
        if(a[mid]==item)
            printf("%d",mid);
        else if(a[mid]>item)
            ub=mid-1;
        else lb = mid+1;
    }
    return 0;
}
