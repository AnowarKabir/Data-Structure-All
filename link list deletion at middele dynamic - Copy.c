#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;
node *head,*ptr,*ptr1,*q;

int main()
{
    int v;
    head=0,q=0;
    for(;;)
    {
        printf("press 0 to break.\n");
        scanf("%d",&v);
        if(v==0)
        {
            break;
        }
        else
        {
            ptr=(node*)malloc(sizeof(node));
        }

        if(head==0)
        {
            ptr->value=v;
            ptr->next=NULL;
            head=ptr;
            q=ptr;
        }
        else
        {
            ptr->value=v;
            ptr->next=NULL;
            q->next=ptr;
            q=ptr;
        }
    }

    printf("the insert value are::\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }

    int delete_value;
    printf("enter delete value:\n");
    scanf("%d",&delete_value);
    ptr=head;
    while(ptr->value!=delete_value)
    {
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=ptr->next;

    printf("values after deletion:\n");

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }



    return 0;
}
