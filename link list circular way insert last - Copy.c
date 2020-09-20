#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node x;

int main()
{
    x s1,s2,s3,*head,*ptr,*ptr1;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=head;
    printf("the value are:\n");
    ptr=head;
    printf("%d\n",ptr->value);
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("enter a value for insertion at last:\n");
    int v;
    scanf("%d",&v);
    ptr=&v;
    ptr=(x*)malloc(sizeof(x));
    ptr->value=v;
    ptr->next=head;
    ptr1=head;
    while(ptr1->next!=head)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=ptr;
    printf("the value after insertion:\n");
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


