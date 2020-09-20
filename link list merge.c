#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node *head,*head1,*head2,*ptr,*ptr1,s1,s2,s3,s4,s5,s6;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    s4.value=40;
    s5.value=50;
    s6.value=60;
    head1=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    head2=&s4;
    s4.next=&s5;
    s5.next=&s6;
    s6.next=NULL;
    printf("the value with head1:\n");
    ptr=head1;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("the value with head2:\n");
    ptr=head2;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    /// merge starting...///

    head=head1;
    ptr=head1;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=head2;
    printf("the value after merge:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    return 0;
}
