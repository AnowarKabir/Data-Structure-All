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
            head=ptr;
            ptr->value=x;
            ptr->next=head;
            q=ptr;
        }
        else
        {
            ptr->value=x;
            ptr->next=head;
            q->next=ptr;
            q=ptr;
        }
    }

    printf("the values are:\n");
    ptr=head;
    while(ptr->next!=head)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->value);
    /// printf("algorithm of delete middle:\n");
    printf("enter value to delete\n");
    int sv;
    scanf("%d",&sv);
    ptr=head;
    while(ptr->value!=sv)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=ptr->next;

    printf("value after deletion:\n");
    ptr=head;
    while(ptr->next!=head)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->value);


    return 0;
}





