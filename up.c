#include<stdio.h>
main()
{
int i,j,v,n;
printf("Enter the number of array element \n");
scanf("%d",&n);
int a[n];
printf("Enter the value\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the update value\n");
scanf("%d",&v);
printf("Enter the position\n");
scanf("%d",&i);
if(i>=n)
printf("update is not possible\n");
else
     {
     a[i]=v;
     }
      printf("The update array is\n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
}
