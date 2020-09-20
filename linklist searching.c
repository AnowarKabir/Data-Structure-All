#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

int main()
{
    struct student s1,s2,s3,*head,*ptr;
    s1.value=10;
    s2.value=20;
    s3.value=30;
    head=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    ptr=head;
    int v,valuefound=0;
    printf("enter a value.\n");
    scanf("%d",&v);
    while(ptr!=NULL && valuefound!=1)
    {
        if(ptr->value==v)
        {
            valuefound=1;

        }
        ptr=ptr->next;
    }
    if(valuefound==1)
    {
        printf("value found\n");;
    }
    else
    {
        printf("value not found\n");
    }

}
