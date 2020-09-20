#include<stdio.h>
struct student
{
      int value;
      struct student *next;
};
main()
{
      struct student s1,s2,s3,*ptr,*ptr1,*head;
      int valuefound=0,svalue;

      s1.value=81;
      s2.value=82;
      s3.value=83;
      head=&s1;
      s1.next=&s2;
      s2.next=&s3;
      s3.next=NULL;
      ptr=head;
      ptr1=head;
     /* while(ptr!=NULL)
      {
            printf("%d\n",ptr->value);
            ptr=ptr->next;
      }*/
      printf("Pls enter svalue=\n");
      scanf("%d",svalue);
      while(ptr1!=NULL && valuefound!=1)
      {
            if(ptr1->value==svalue)
            {
                  valuefound=1;
            }
             ptr1=ptr1->next;
      }
      if(valuefound==1)
            printf("value found\n");
      else
            printf("value not found\n");
}
