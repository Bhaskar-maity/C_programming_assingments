#include<stdio.h>

int main()
{
    int i,j,b,n=10;
    for(i-=1;i<n;i++)
    {
        if(i%2!=0)
        {
            for(b=1;b<n-i;b++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf(" *");
            printf("\n");
        }
    }
    return 0;
}

