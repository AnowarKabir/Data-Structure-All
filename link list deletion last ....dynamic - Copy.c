#include<stdio.h>

struct student
{
    int value;
    struct student *next;
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
            ptr->value=x;
            ptr->next=NULL;
            head=ptr;
            q=ptr;
        }
        else
        {
            ptr->value=x;
            ptr->next=NULL;
            q->next=ptr;
            q=ptr;
        }
    }

    ptr=head;

    while(ptr!=NULL)
    {
        printf("%d\t",ptr->value);

        ptr=ptr->next;
    }

    printf("\n\nafter deletion at last position------\n\n");

    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->value);
        ptr=ptr->next;
    }

    return 0;
}


