//Matrix addition
#include <stdio.h>

int main()
{
    int mat_a[3][3],mat_b[3][3],mat_c[3][3],i,j,r,c;
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
     
    printf("Sum of A and B:"); 
     for(i=0;i<r;i++)
     {
         printf("\n");
       for(j=0;j<c;j++)
        { 
         mat_c[i][j]= mat_a[i][j]+ mat_b[i][j];
         printf("%d\t",mat_c[i][j]);
        } 
     }
    return 0;
}
