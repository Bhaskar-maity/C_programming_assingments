#include<stdio.h>
int queue[100],ch,f,r,n,item;
void insert();
void delete_queue();
void display();

int main()
{
    f=-1;r=-1;
    printf("Enter the size of queue :");
    scanf("%d",&n);
    while(1)
    {

        printf("--------------------------------");

        printf("\n1-for insert\n2-for delete\n3-for display\n4-for exit");
        printf("\nEnter your choise\n>>");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_queue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choise");
        }
        printf("\n\n");
    }
}

void insert()
{
    if(r==n-1)
        printf("Queue is full");
    else
    {
        if(f==-1)
            f=0;
        printf("Enter the item :");
        scanf("%d",&item);
        queue[++r]=item;
    }
}
void delete_queue()
{
    if(f==-1 || f>r)
        printf("Queue is empty");
    else
    {
        printf("The delected item is %d",queue[f]);
        f++;
    }
}
void display()
{
    int i;
    if(f==-1 || f==r)
        printf("The queue is empty");
    else
    {
        for(i=f;i<=r;i++)
            printf("%d\t",queue[i]);
    }
}
