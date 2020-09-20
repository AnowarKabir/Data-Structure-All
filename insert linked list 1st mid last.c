#include<stdio.h>
struct student
{
int value;
struct student *next;
};
typedef struct student node;
node *p,*q,*h,*p1;
main()
{
      int x,a,b,s;
      h=0;
      printf("Enter your value\n");
for(;;)
{
scanf("%d",&x);
if(x==-99)
break;
else
{
      p=(node*)malloc(sizeof(node));
if(h==0)
      {
            h=p;
            p->value=x;
            p->next=NULL;
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
      }
for(;;)
      {
            printf("Enter your option(choice)\n");
            scanf("%d",&x);
            if(x==1)
                  {
                        printf("I am in insertion\n");
                        printf("Enter your insert value:\n");
                        scanf("%d",&a);
                        p=(node*)malloc(sizeof(node));
                        printf("Enter your insert option:\n");
                        scanf("%d",&b);
                        if(b==1)
{
printf("1st insertion\n");
p->next=h;
p->value=a;
h=p;
}
else if(b==2)
{
printf("Middle insertion\n");
printf("Enter your search value:");
scanf("%d",&s);
p1=h;
while(p1->value!=s)
p1=p1->next;
p->next=p1->next;
p1->next=p;
p->value=a;
}
else
{
p->next=NULL;
p->value=a;
p1=h;
while(p1->next!=0)
p1=p1->next;
p1->next=p;
}
}
else if(x==2)
{
printf("I am in display\n");
p1=h;
while(p1!=NULL)
{
printf("%d\n",p1->value);
p1=p1->next;
}
}
else
break;
    }
}
