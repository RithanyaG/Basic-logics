//prime number-while loop

#include <stdio.h>

int main()
{
    int i,n,stoper;
    i=2;
    stoper=0;
    printf("Enter a number:");
    scanf("%d",&n);
    
    while(i<=n/2)
    {
        if(n%i==0)
        {stoper=1;
        break;}
        i++;
    }
     if(stoper==0)
       printf("%d is a prime number.",n);
     else  
       printf("%d is not a prime number.",n);

    return 0;
}
