#include <stdio.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;
node *h,*p,*q;

int main()
{
    int x;

    h=0,q=0;

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
            p=(node*)malloc(sizeof(node));
        }

        if(h==0)
        {
            p->value=x;
            p->next=NULL;
            h=p;
            q=p;
        }
        else
        {
            p->value=x;
            p->next=NULL;
            q->next=p;
            q=p;
        }

    }


    p=h;

    while(p!=NULL)
    {
        printf("%d ",p->value);
        p=p->next;
    }
    return 0;
}
