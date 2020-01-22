#include<stdio.h>
int main()
{
    int marks[10],i,index;
    int group[10] = {0};
    printf("\n enter the marks of 10 students : ");
    for(i=0;i<10;i++)
    {
        printf("\n MARKS[%d] = ",i);
        scanf("%d",&marks[i]);
        ++group[(int)(marks[i])/10];
    }

    printf("\n ***********************************");
    printf("\n GROUP \t\t FREQUENCY");
   for(i=0;i<10;i++)
    {
        printf("\n  %d \t\t %d",i,group[i]);

    }
    return 0;

}
