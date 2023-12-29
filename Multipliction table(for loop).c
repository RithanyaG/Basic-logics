/*Multiplication table*/

#include <stdio.h>

int main()
{
    int n,i,r;
    scanf("%d%d",&n,&r);
    
    for(i=1;i<=r;i++)
    
    printf("%d\t*\t%d\t=\t%d\n",n,i,n*i);

    return 0;
}
