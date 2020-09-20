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
    printf("delete middle algorithm........\n");
    printf("enter value to delete:\n");
    int sv;
    scanf("%d",&sv);
    ptr=head;
    while(ptr->value!=sv)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=ptr->next;
    printf("now,the values are:\n");
    ptr=head;
    while(ptr->next!=head)
    {
        printf("value=%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("value=%d\n",ptr->value);

}


