#include<stdio.h>

struct student
{
    int value;
    struct student *next;
};
typedef struct student node;
node *ptr,*head,*q;

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
            head=ptr;
            ptr->value=x;
            ptr->next=head;
            q=ptr;
        }
        else
        {
            ptr->value=x;
            ptr->next=head;
            q->next=ptr;
            q=ptr;
        }
    }

    printf("the values are:\n");
    ptr=head;
    printf("%d\n",ptr->value);
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }



return 0;
}


