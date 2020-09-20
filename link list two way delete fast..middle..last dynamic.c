#include<stdio.h>

struct student
{
    int value;
    struct student *next,*previous;
};
typedef struct student node;
node *ptr,*head,*q,*ptr1,*ptr2;

int main()
{
    int x,b,sv;
    head=0,q=0;
    for(;;)
    {
        printf("-99 to break\n");
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
            head=ptr;
            ptr->value=x;
            ptr->next=NULL;
            ptr->previous=NULL;
            q=ptr;
        }
        else
        {
            ptr->value=x;
            ptr->next=NULL;
            ptr->previous=q;
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
                head->previous=NULL;

            }
            else if(b==2)
            {
                printf("enter your delete value:\n");
                scanf("%d",&sv);
                ptr=head;
                while(ptr->value!=sv)
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
                {
                    ptr1->next=ptr->next;
                    ptr2=ptr->next;
                    ptr2->previous=ptr1;

                }

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
            printf("forward way....\n");
            ptr=head;
            while(ptr!=NULL)
            {
                printf("%d\n",ptr->value);
                ptr=ptr->next;
            }
            printf("reverse way....\n");
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
        }
        else
        {
            break;
        }
    }
}
