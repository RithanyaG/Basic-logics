//prime number-for loop


#include <stdio.h>

int main()
{
    int i,n,stoper;
    stoper=0;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {stoper=1;
        break;}
    }
     if(stoper==0)
       printf("%d is a prime number.",n);
     else  
       printf("%d is not a prime number.",n);
    return 0;
}
