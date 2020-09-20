#include<stdio.h>

struct student
{
    int value;
    struct student *next;
};
typedef struct student node;
node *ptr,*head,*q,*p1,*ptr1;

int main()
{
    head=0,q=0;
    int x,a,b,s;
    for(;;)
    {
        printf("enter -99 to break:\n");
        scanf("%d",&x);
        if(x==-99)
        {
            break;
        }
        else
        {
            ptr=(node*)malloc(sizeof(node));
        }
        if(head==0)
        {
            ptr->next=NULL;
            ptr->value=x;
            head=ptr;
            q=ptr;
        }
        else
        {
            ptr->next=NULL;
            ptr->value=x;
            q->next=ptr;
            q=ptr;
        }
    }
    for(;;)
    {
        printf("enter your choise:\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("I am in insert\n");
            printf("enter value to insert:\n");
            scanf("%d",&a);
            ptr=(node*)malloc(sizeof(node));
            printf("enter your insert option:\n");
            scanf("%d",&b);
            if(b==1)
            {
               ptr->next=head;
               ptr->value=a;
               head=ptr;
            }
            else if(b==2)
            {
                printf("enter your search value:\n");
                scanf("%d",&s);
                p1=head;
                while(p1->value!=s)
                {
                    p1=p1->next;
                }
                ptr->next=p1->next;
                p1->next=ptr;
                ptr->value=a;

            }
            else
            {
                ptr->next=NULL;
                ptr->value=a;
                p1=head;
                while(p1->next!=NULL)
                {
                    p1=p1->next;
                }
                p1->next=ptr;
            }
        }
        else if(x==2)
        {
            printf("I am in display\n");
            ptr=head;
            while(ptr!=NULL)
            {
                printf("%d\n",ptr->value);
                ptr=ptr->next;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
