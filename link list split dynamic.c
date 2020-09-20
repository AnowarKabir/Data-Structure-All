#include<stdio.h>

struct student
{
    int value;
    struct student *next;
};
typedef struct student node;
node *ptr,*head,*head1,*head2,*q;

int main()
{
    int x,c=0;
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
            c++;
        }
        else
        {
            ptr->value=x;
            ptr->next=NULL;
            q->next=ptr;
            q=ptr;
            c++;
        }
    }
    printf("the insert value are:\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    /// split starting...///

    head1=head;
    head2=NULL;
    int i=1,position;
    printf("enter position:\n");
    scanf("%d",&position);
    if(position<=c)
    {
    ptr=head;
    while(i!=position)
    {
        i=i+1;
        ptr=ptr->next;
    }
    head2=ptr->next;
    ptr->next=NULL;
    printf("the value in head1:\n");
    ptr=head1;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    printf("the value in head2:\n");
    ptr=head2;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    }
    else
    {
        printf("wrong position\n");
    }


    return 0;
}


