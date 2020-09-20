#include<stdio.h>
main()
{
int a[20],top=-1,maxsize=4,value,i,j,n;

for( ; ;){
printf("Enter your option\n");
scanf("%d",&n);
     if(n==1)
{
if(top==maxsize)
printf("Overflow\n");
      else
{
printf("Enter your value\n");
scanf("%d",&value);
      top=top+1;
      a[top]=value;
printf("Data succesfully inserted\n");
}
}
     else if(n==2)	{
      if(top==-1)
printf("Underflow\n");
      else
{
      a[top]=NULL;
      top=top-1;
printf("Data succesfully deleted\n");
}
}
      else if(n==3)
{
printf("stack values are\n");
for(j=0;j<=top;j++)
printf("%d\n",a[j]);
}
      else
      exit(0);
}
}
