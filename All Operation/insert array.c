#include<stdio.h>
main()
{
    int i,j,v,n;
    printf("Enter the element number \n");
    scanf("%d",&n);
    int ara[n];
    printf("Enter %d element \n",n);
    for(j=0; j<n; j++)
        scanf("%d",&ara[j]);
    printf("Enter insert position\n");
    scanf("%d",&i);
    printf("Enter the insert value\n");
    scanf("%d",&v);

    if(i>=n)
    {
        ara[n]=v;
    }
    else
    {
        for(j=n; j>i; j--)
        ara[j]=ara[j-1];
        ara[j]=v;
    }
    printf("Resultant array is\n");
    for(j=0; j<n+1; j++)
     printf("%d ",ara[j]);
}
