#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

int main()
{
    int f=0,s;
    struct student s1,s2,s3,*head,*ptr;
    head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("address=%u\n",ptr);
        printf("value=%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("Enter svalue:\n");
    scanf("%d",&s);



}
