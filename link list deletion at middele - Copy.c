#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node s1,s2,s3,s4,s5,*head,*ptr,*ptr1;
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
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    int delete_value;
    printf("enter delete value:\n");
    scanf("%d",&delete_value);
    ptr=head;
    while(ptr->value!=delete_value)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=ptr->next;

    printf("the value are:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    return 0;
}
