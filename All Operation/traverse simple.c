#include<stdio.h>
struct student{
      int value;
      struct student *next;
};
main()
{
      int v;
      struct student s1,s2,s3,*ptr,*head;
      s1.value=80;
      s2.value=87;
      s3.value=89;
      head=&s1;
      s1.next=&s2;
      s2.next=&s3;
      s3.next=NULL;
      ptr=head;
      while(ptr!=NULL)
      {
            printf("%d\n",ptr->value);
            ptr=ptr->next;
      }
}
