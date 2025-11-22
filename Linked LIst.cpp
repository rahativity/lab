#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    node*next;
};

void insert(node*p, int val)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    node*broNode=(node*)malloc(sizeof(node));
    broNode->data=val;
    broNode->next=NULL;
    p->next=broNode;
}

void display(node*p)
{
    while(p->next!=0)
    {
        printf("%d\n",p->next->data);
        p=p->next;
    }
}
void search(node*p,int val)
{
    int count=0;
    while(p->next!=0)
    {
        if(p->next->data==val)
            count++;
        p=p->next;
    }
    printf("The element was found %d times\n",count);
}
void deletion(node*p,int val)
{
    while(p->next!=0)
    {
        if(p->next->data==val)
        {
            p->next=p->next->next;
            return;
        }
        p=p->next;
    }
}
int main()
{
    node*first=(node*)malloc(sizeof(node));
    first->next=NULL;
    insert(first,10);
    insert(first,20);
    insert(first,30);
    insert(first,20);

    display(first);

    search(first,20);

    deletion(first,20);

    display(first);
    return 0;
}
