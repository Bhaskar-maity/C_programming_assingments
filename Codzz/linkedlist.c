#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int num;
    struct node *ptr;
}NODE;

int main()
{
    NODE *node,*temp=0,*head=0;
    int n,x,item;
    printf("Enter the no of block in linked list->");
    scanf("%d",&n);
    x=1;
    while(x<=n)
    {
        node=(NODE*)malloc(sizeof(NODE));
        node->ptr=0;
        printf("Enter the %dth no->",x);
        scanf("%d",&item);

        node->num=item;

        if(head==0)
            head=temp=node;
        else
        {
            temp->ptr=node;
            temp=node;
        }
        x++;
    }
    printf("---------linked list--------\n");
    temp=head;
    while(temp->ptr!=0)
    {

        printf("%d\t",temp->num);
        temp=temp->ptr;
    }
}
