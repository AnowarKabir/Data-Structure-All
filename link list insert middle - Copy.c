#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

typedef struct node dipu;

int main()
{
    dipu s1,s2,s3,s4,s5,*head,*ptr,*ptr1;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    s4.value=40;
    s5.value=50;
    head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;
    s4.next=&s5;
    s5.next=NULL;
    ptr=head;
    printf("the value  are:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    int x,sv;
    printf("enter a value for insertion at middle:\n");
    scanf("%d",&x);
    printf("enter a search value:\n");
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
        ptr=(dipu*)malloc(sizeof(dipu));
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        ptr->value=x;
    }
    printf("the insert value are:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    return 0;
}
