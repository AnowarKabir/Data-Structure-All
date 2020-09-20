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
    printf("the insert value are:\n");
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

    printf("press 1 for deletion at first:\n");
    printf("press 2 for deletion at middle:\n");
    printf("press 3 for deletion at last:\n");
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
           printf("the values are:\n");
           head=head->next;
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
       }
       if(t==2)
       {
            int delete_value;
            printf("enter delete value at middle:\n");
            scanf("%d",&delete_value);
            ptr=head;
            while(ptr->value!=delete_value)
            {
                ptr1=ptr;
                ptr=ptr->next;
            }
            ptr1->next=ptr->next;
            printf("the values are:\n");
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
       }
       if(t==3)
       {
           ptr=head;
           while(ptr->next!=NULL)
           {
               ptr1=ptr;
               ptr=ptr->next;
           }
           ptr1->next=NULL;

           printf("the values are:\n");
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

       }

    }



    return 0;
}


