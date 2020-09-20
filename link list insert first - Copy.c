#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node x;

int main()
{
    struct node s1,s2,s3,*head,*ptr;
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
    ptr=(x*)malloc(sizeof(x));
    ptr->next=head;
    ptr->value=v;
    head=ptr;
    printf("the insert value is:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }



}
