#include<stdio.h>
int main()
{
    int a[100],n,i,s=0;
    float avg;
    printf("enter the number of students");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {printf("enter the %dth students mark",i+1);
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
        s=s+a[i];
    avg = (float)s/n;
    printf("the average is %f",avg);
    return 0;
}
