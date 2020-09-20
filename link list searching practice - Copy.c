#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node s1,s2,s3,s4,*head,*ptr;
    head=&s1;
    ptr=head;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;
    s4.next=NULL;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    s4.value=40;
    int valuefound,v,i;
    printf("enter a value:\n");
    scanf("%d",&v);
    while(ptr!=NULL && valuefound!=1)
    {

        if(ptr->value==v)
        {
            valuefound=1;
        }
        ptr=ptr->next;
    }
    printf("\n");

    if(valuefound==1)
    {
        printf("value found\n");
    }
    else
    {
        printf("not found\n");
    }
}
