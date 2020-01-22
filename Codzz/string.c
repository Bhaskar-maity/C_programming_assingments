#include<stdio.h>
int main()
{
    int w,i,p;
    char str[] = "HELLO";
    printf("\n");
    for(i=0;i<5;i++)
    {
        p=i+1;
        printf("\n%-5.*s",p,str);
    }


    for(i=4;i>=0;i--)
    {
        p=i+1;
        printf("\n%-5.*s",p,str);
    }
    return 0;
}
