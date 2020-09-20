#include<stdio.h>
#include<stdlib.h>
struct mynode{
struct mynode *LL;
int D;
struct mynode *RL;
};
typedef struct mynode node;

main()
{
      node *T ,*P ,*Q, *A[100];
      int i,j,x,n;
      T=0,n=0;
      for(;;)
      {
            printf("Enter data:\n");
            scanf("%d",&x);
            if(x<0) break;
          Q=(node*)(malloc(sizeof(node)));
          printf("Q=%x\n",Q);
          Q->D=x;
          Q->LL=NULL;
          Q->D=x;
          Q->RL=NULL;
          if(T==0)
            T=Q;
          else
          {
                P=T;
                for(;;)
                {
                      if(P->D==x)
                        {
                      printf("Sorry duplicate value\n");
                      break;
                      }
                      else
                      {
                            if(x<P->D)
                            {
                                  if(P->LL==0)
                                  {
                                        P->LL=Q;
                                        break;
                                  }
                                  else
                                  {
                                        P=P->LL;
                                  }
                            }
                            else
                            {
                                  if(P->RL==0)
                                  {
                                        P->RL=Q;
                                        break;
                                  }
                                  else
                                  {
                                        P=P->RL;
                                  }
                            }
                      }
                }
          }
          n++;
          A[n]=Q;

      }///print
      for(i=1;i<=n;i++)
      {
            P=A[i];
            printf("%4x  %4x  %d  %4x\n",P,P->LL,P->D,P->RL);
      }

}
