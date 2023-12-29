//Matrix multiplication
#include <stdio.h>

int main()
{
    int mat_a[10][10],mat_b[10][10],mat_c[10][10],i,j,k,r,c;
    printf("Enter number of rows and columns:");
    scanf("%d%d",&r,&c);
    printf("Rows=%d\ncolumns=%d\n",r,c);
    
    printf("Matrix A:"); 
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&mat_a[i][j]);
     
    printf("Matrix B:"); 
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&mat_b[i][j]);
      
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
      mat_c[i][j]=0;
      for(k=0;k<c;k++)
      {
         mat_c[i][j]=mat_c[i][j]+ mat_a[i][k]*mat_b[k][j];
      }
     }
    }
    
    printf("Multiplication of A and B:");
    for(i=0;i<r;i++)
     {
        printf("\n");
       for(j=0;j<c;j++)
        { 
          printf("%d\t",mat_c[i][j]);
        }
     }    
    return 0;
}
