


#include <stdio.h>

int main()
{
    int i,j,rows;
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++)
         {
           printf("\n");
           for(j=1;j<=i;j++)
           printf("%d\t",j);
         }  

    return 0;
}
