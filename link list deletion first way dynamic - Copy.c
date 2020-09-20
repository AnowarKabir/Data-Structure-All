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
        printf("enter 1 for delete:\nenter 2 for display:\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("I am in deletion\n");
            printf("enter 5 for delete only one element:\n");
            printf("enter 1 for delete first:\nenter 2 for delete middle:\nenter 3 for delete last:\n");
            scanf("%d",&b);
            if(b==5)
            {
                if(head->next==NULL)
                {
                    head=NULL;
                }
            }
           else if(b==1)
            {
              head=head->next;

            }
            else if(b==2)
            {
                printf("enter your delete value:\n");
                scanf("%d",&s);
                ptr=head;
                while(ptr->value!=s)
                {
                    ptr1=ptr;
                    ptr=ptr->next;
                    if(ptr==NULL)
                    {
                        printf("value not found\n");
                        break;
                    }
                }
                if(ptr!=NULL)
                ptr1->next=ptr->next;

            }
            else
            {
               ptr=head;
               while(ptr->next!=NULL)
               {
                   ptr1=ptr;
                   ptr=ptr->next;
               }
               ptr1->next=NULL;
            }
        }
        else if(x==2)
        {
            printf("I am in display\n");
            if(head==NULL)
            {
                printf("list is empty\n");
                return 0;
            }
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

