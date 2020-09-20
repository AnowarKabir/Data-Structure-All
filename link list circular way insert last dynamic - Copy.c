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
    printf("%d\n",ptr->value);
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("enter a value for insertion at last:\n");
    scanf("%d",&x);
    ptr=&x;
    ptr=(node*)malloc(sizeof(node));
    ptr->value=x;
    ptr->next=head;
    ptr1=head;
    while(ptr1->next!=head)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=ptr;
    printf("value after insertion:\n");
    ptr=head;
    printf("%d\n",ptr->value);
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }


return 0;
}




