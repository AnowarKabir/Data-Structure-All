#include <stdio.h>

struct node
{
    int value;
    struct node *next,*previous;
};

int main()
{
    struct node s1,s2,s3,*head,*ptr,*ptr1;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    s3.previous=&s2;
    s2.previous=&s1;
    s1.previous=NULL;
    printf("value are in forward traverse:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("value are in reverse traverse:\n");
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->previous;
    }
    ///printf("delete first algorithm:\n");
    head=head->next;
    head->previous=NULL;
    printf("value after deletion:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    return 0;
}

