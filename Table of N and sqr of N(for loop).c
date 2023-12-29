/*Table of n and square of n*/

#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    
    printf("N\tN*N");
     
     for(i=1;i<=n;i++)
     
          printf("\n%d\t%d",i,i*i);

    return 0;
}
