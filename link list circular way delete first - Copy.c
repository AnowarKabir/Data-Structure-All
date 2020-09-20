#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

int main()
{
    struct student s1,s2,s3,*head,*ptr,*ptr1;
    head=&s1;
    ptr=head;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=head;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    ptr=head;
    while(ptr->next!=head)
    {
        printf("value=%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("value=%d\n",ptr->value);
    printf("delete first........\n");
    ptr1=head;
    ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=head->next;
    head=ptr1->next;
    printf("now,the values are:\n");
    ptr=head;
    while(ptr->next!=head)
    {
        printf("value=%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("value=%d\n",ptr->value);



}
