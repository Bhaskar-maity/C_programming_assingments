#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int data;
    struct list*next;
}node;


int l=0;

void insert_first(node*);
node*insert_last(node*);
void traverse(node*);
void insert_any(node*,int);



int main()
{
    int choise=0,g=1,loc;
    node *head,*p;
    head=(node*)malloc(sizeof(node));
    head->data=NULL;
    head->next=NUll;
    p=head;

    while(1)
    {
        printf("Enter choise\n1-insert at last\n2-to display\n3-insert at first\n4-insert at any position\n6-to exit\n>>");
        scanf("%d",&choise);
        switch(choise)
        {
        case 1:
            insert|_last(p);
            break;

        case 2:
            traverse(p);
            break;
        case 3:

        }
    }
}

node* insert_last(node* current)
{
    int n=1;
    while(n!=0)
    {
        node*temp=(node*)malloc(sizeof(node));
        printf("Insert>");
        scanf("%d",&(temp->data));
        temp->next=NULL;
        current->next=temp;
        current=temp;
        printf("enter 1->insert /0->to exit inserting");
        scanf("%d",&n);

    }
    return current;
}

void traverse(node*first)
{
    while(first!=NULL)
    {
        printf("%d\t",first->data);
        first=first->next;
    }
}

void insert_first(node*first)
{
    int n=1;
    while
}
