#include <stdio.h>
int main() {
  int a,b,i,j,k,x,y,sum=0;
  printf("Enter Rows & columns of 1st matrix\n ");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Enter Rows & columns of 2nd matrix\n ");
  scanf("%d",&x);
  scanf("%d",&y);
  int c[a][b],d[x][y],e[10][10];
  printf("Enter Elements of 1st Matrix:\n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
        {
          scanf("%d",&c[i][j]);
        }
    }
  printf("Enter Elements of 2nd Matrix:\n");
  for(i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
        {
          scanf("%d",&d[i][j]);
        }
    }
   for(i=0;i<a;i++)
     {
      for(j=0;j<y;j++)
        {
            for(k=0;k<x;k++)
                {
                    sum+=c[i][k]*d[k][j];
                }
                e[i][j] = sum;
                sum=0;

            }
        }
        printf("Multiple of two matrices is \n");
  for(i=0;i<a;i++)
    {
      for(j=0;j<y;j++)
        {
          printf("%d\t",e[i][j]);
        }
      printf("\n");
    }
}
