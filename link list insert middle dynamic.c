#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;

int main()
{
    node *head,*ptr,*q,*ptr1;
    head=0,q=0;
    int v;
    for(;;)
    {
        printf("enter 0 to break:\n");
        scanf("%d",&v);
        if(v==0)
        {
            break;
        }
        else
        {
            ptr=(node*)malloc(sizeof(node));
        }

        if(head==0)
        {
            ptr->value=v;
            ptr->next=NULL;
            head=ptr;
            q=ptr;
        }
        else
        {
            ptr->value=v;
            ptr->next=NULL;
            q->next=ptr;
            q=ptr;
        }
    }

    printf("the values are:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    int x,sv;
    printf("enter a value for insertion at middle:\n");
    scanf("%d",&x);
    printf("enter search value to insert a value after that:\n");
    scanf("%d",&sv);
    ptr=&x;
    ptr1=head;
    while(ptr1!=NULL && ptr1->value!=sv)
    {
        ptr1=ptr1->next;
    }
    if(ptr1==NULL)
    {
        printf("search value not found\n");
        return 0;
    }
    else
    {
        ptr=(node*)malloc(sizeof(node));
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        ptr->value=x;
    }

    printf("values after insertion at middle:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    return 0;
}
