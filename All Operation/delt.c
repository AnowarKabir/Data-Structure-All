#include<stdio.h>
main()
{
      int i,j,n;
      printf("Enter the number of element\n");
      scanf("%d",&n);
      int ara[n];
      printf("Enter %d value\n",n);
      for(j=0;j<n;j++)
            scanf("%d",&ara[j]);
      printf("Enter the delete position\n");
      scanf("%d",&i);
      if(i>=n)
            printf("Delete is not position\n");
      else{
            for(j=i+1;j<n;j++)
            ara[j-1]=ara[j];
            printf("The resultant array is\n");
            for(j=0;j<n-1;j++)
            printf("%d\n",ara[j]);

      }
}


