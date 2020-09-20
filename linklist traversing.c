#include <stdio.h>
struct student
{
    int value;
    struct student *next;
};
int main()
{
   struct student s1,s2,s3,*head,*ptr;
   s1.value=10;
   s2.value=20;
   s3.value=30;
   head=&s1;
   s1.next=&s2;
   s2.next=&s3;
   s3.next=NULL;
   ptr=head;
   while(ptr!=NULL)
   {
      // ptr=ptr->next;
       printf("%d ",ptr->value);
      ptr=ptr->next;
   }
   return 0;
}
