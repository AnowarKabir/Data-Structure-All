#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

int main()
{
    struct student s1,s2,s3,*head,*ptr;
    head=&s1;
    ptr=head;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    while(ptr!=NULL)
    {
        printf("value=%d\n",ptr->value);
        ptr=ptr->next;
    }

    printf("after deletion of first node of link list...\n");

    head=head->next;
    ptr=head;
     while(ptr!=NULL)
    {
        printf("value=%d\n",ptr->value);
        ptr=ptr->next;
    }


}
