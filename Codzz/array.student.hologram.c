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
    printf("\n FREQUENCY HISTOGRAM");
   for(index=0;index<10;index++)
    {
        printf("\n GROUP %d | ",index);
        for(i=0;i<group[index];i++)
            printf(" * ");

    }
    return 0;

}

