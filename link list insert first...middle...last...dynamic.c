#include<stdio.h>
struct student
{
    int value;
    struct student *next;
};
typedef struct student node;
node *ptr,*head,*q,*ptr1;
int main()
{
    int x;
    head=0,q=0;
    for(;;)
    {
        printf("enter 0 to break\n");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else
        {
            ptr=(node*)malloc(sizeof(node));
        }

        if(head==0)
        {
            ptr->value=x;
            ptr->next=NULL;
            head=ptr;
            q=ptr;
        }
        else
        {
            ptr->value=x;
            ptr->next=NULL;
            q->next=ptr;
            q=ptr;
        }
    }
    printf("the  values are:\n");
    ptr=head;
    printf("Head =%d\n",ptr);
    printf("Address\t\tvalue\tAddress\n");
    printf(".............................\n");
    while(ptr!=NULL)
    {
        printf("%d\t\t%d\t",ptr,ptr->value);
        ptr=ptr->next;
        printf("%d\n",ptr);
    }

    printf("press 1 for insertion at first:\n");
    printf("press 2 for insertion at middle:\n");
    printf("press 3 for insertion at last:\n");
    int t;
    for(;;)
    {
        printf("enter your choise:\n");
        scanf("%d",&t);
        if(t==0 || t>3 || t<1)
        {
            break;
        }
        if(t==1)
        {
            int v;
            printf("enter a vlaue:\n");
            scanf("%d",&v);
            ptr=&v;
            ptr=(node*)malloc(sizeof(node));
            ptr->next=head;
            ptr->value=v;
            head=ptr;
            printf("the result is:\n");
            printf("Head =%d\n",ptr);
            printf("Address\t\tvalue\tAddress\n");
            printf(".............................\n");
            while(ptr!=NULL)
            {
                printf("%d\t%d\t",ptr,ptr->value);
                ptr=ptr->next;
                printf("%d\n",ptr);
            }

        }
        if(t==2)
        {
            int x,sv;
            printf("enter a value for insertion at middle:\n");
            scanf("%d",&x);
            printf("enter search value to insert a value after that:\n");
            scanf("%d",&sv);
            ptr=&x;
            ptr1=head;
            while(ptr1!=NULL && ptr1->value!=sv)
            {
                ptr1=ptr1->next;
            }
            if(ptr1==NULL)
            {
                printf("search value not found\n");
                return 0;
            }
            else
            {
                ptr=(node*)malloc(sizeof(node));
                ptr->next=ptr1->next;
                ptr1->next=ptr;
                ptr->value=x;
            }

            printf("values after insertion at middle:\n");
            ptr=head;
            printf("Head =%d\n",ptr);
            printf("Address\t\tvalue\tAddress\n");
            printf(".............................\n");
            while(ptr!=NULL)
            {
                printf("%d\t%d\t",ptr,ptr->value);
                ptr=ptr->next;
                printf("%d\n",ptr);
            }
        }
        if(t==3)
        {
            int v;
            printf("enter a value:\n");
            scanf("%d",&v);
            ptr=&v;
            ptr=(node*)malloc(sizeof(node));
            ptr->next=NULL;
            ptr->value=v;
            ptr1=head;

            while(ptr1->next!=NULL)
            {
                ptr1=ptr1->next;
            }
            ptr1->next=ptr;

            printf("the insert value is:\n");

            ptr1=head;
            printf("Head =%d\n",ptr1);
            printf("Address\t\tvalue\tAddress\n");
            printf(".............................\n");
            while(ptr1!=NULL)
            {
                printf("%d\t%d\t",ptr1,ptr1->value);
                ptr1=ptr1->next;
                printf("%d\n",ptr1);
            }
        }
    }
    return 0;
}
