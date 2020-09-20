#include<stdio.h>

struct student
{
    int value;
    struct student *next,*previous;
};
typedef struct student node;
node *ptr,*head,*q,*ptr1;

int main()
{
    int x;
    head=0,q=0;
    for(;;)
    {
        printf("-99 to break\n");
        scanf("%d",&x);
        if(x==-99)
        {
            break;
        }
        else
        {
            ptr=(node*)malloc(sizeof(node));
        }

        if(head==0)
        {
            head=ptr;
            ptr->value=x;
            ptr->next=NULL;
            ptr->previous=NULL;
            q=ptr;
        }
        else
        {
            ptr->value=x;
            ptr->next=NULL;
            ptr->previous=q;
            q->next=ptr;
            q=ptr;
        }
    }
    printf("value are in forward traverse:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("value are in reverse traverse:\n");
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->previous;
    }
    ///printf("delete last algorithm:\n");
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
    printf("value after deletion:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
}

