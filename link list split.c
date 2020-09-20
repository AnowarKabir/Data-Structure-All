#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node *head,*head1,*head2,*ptr,*ptr1,s1,s2,s3,s4,s5;
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
    printf("the value are:\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    /// split starting......///

    head1=head;
    head2=NULL;
    int i=1,position;
    printf("enter position:\n");
    scanf("%d",&position);
    ptr=head;
    while(i!=position)
    {
        i=i+1;
        ptr=ptr->next;
    }
    head2=ptr->next;
    ptr->next=NULL;
    printf("the value in head1:\n");
    ptr=head1;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("the value in head2:\n");
    ptr=head2;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    return 0;
}
