//gcd

#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&a,&b);
    
    while(b)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    
    printf("GCD=%d",a);
    

    return 0;
}
