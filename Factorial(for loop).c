/*Factorial of a number*/

#include <stdio.h>

int main()
{
    int i,n,f=1;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    
    f=f*i;
    
    printf("%d factorial is %d",n,f);

    return 0;
}
