#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

int main()
{
    struct student s1,s2,s3,*head,*ptr,*ptr1,*ptr2;
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
        printf("%d\t",ptr->value);
        ptr=ptr->next;
    }

    printf("\n\nafter deletion of middle node of link list...\n");
    printf("enter value to delete\n");
    int sv;
    scanf("%d",&sv);
    ptr=head;
    while(ptr->value!=sv)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=ptr->next;

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->value);
        ptr=ptr->next;
    }


}
