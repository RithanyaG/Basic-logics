//LCM

#include <stdio.h>

int main()
{
    int a,b,temp,gcd,lcm,c,d;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&a,&b);
    c=a;
    d=b;
    
    while(b)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=c*d/gcd;
    
    printf("GCD=%d\n",a);
    printf("LCM=%d",lcm);
    

    return 0;
}
