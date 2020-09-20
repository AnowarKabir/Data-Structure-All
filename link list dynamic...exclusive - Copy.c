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

    ptr=head;

    while(ptr!=NULL)
    {
        printf("%d\t",ptr->value);

        ptr=ptr->next;
    }

    printf("\nEnter your search value.\n");
    int search_value,value_found=0;
    scanf("%d",& search_value);
    ptr=head;
    while(ptr!=NULL && value_found!=1)
        {
          if(ptr->value==search_value)
            value_found=1;
        ptr=ptr->next;
        }
    if(value_found==1)
        printf("Value is found\n");
    else
        printf("Value not found\n");

    return 0;
}
