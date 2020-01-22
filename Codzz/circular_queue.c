#include<stdio.h>
int queue[100],ch,n,item;
f=-1,r=-1;
void insert();
void delete();
void display();

int main()
{
    printf("Enter the no elements in the queue");
    scanf("%d",&n);
    while(1)
    {
        printf("1-for insert\n2-for delete\n3-for display\n5-for exit\nEnter your choise>>");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break:
        case 2:
            delete;
            break;
        case 3:
            display;
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choise");
        }

    }
}

void insert()
{
   if(f=r+1 || (f==0 && r=n-1))
        printf("THe circular queue is full");
   else
   {
       if(f==-1)
        f=0;
       r=(r+1)%n;
       printf("Enter the item:");
       scanf("%d",&item);
       queue[r]=item;
   }
}
void delete()
{
    if(f==-1)
        printf("The queue is empty");
    else
    {

    }
}
