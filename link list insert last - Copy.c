#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node x;

int main()
{
    struct node s1,s2,s3,*head,*ptr,*ptr1;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    head=&s1;   ///head///
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    int v;
    printf("enter a value:\n");
    scanf("%d",&v);
    ptr=&v;
    ptr=(x*)malloc(sizeof(x));  /// jyga nilam///
    ptr->next=NULL;
    ptr->value=v;
    ptr1=head;

    while(ptr1->next!=NULL)
    {
        ptr1=ptr1->next;
    }

    ptr1->next=ptr;

    printf("the insert value is:\n");

    ptr1=head;

    while(ptr1!=NULL)
    {
        printf("%d\n",ptr1->value);
        ptr1=ptr1->next;
    }



}

