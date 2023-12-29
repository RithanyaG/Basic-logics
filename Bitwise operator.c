

#include <stdio.h>

int main()
{
    int a=3;
    int b=4;
    int c=0;
    
    c=a&b;
    printf("C=%d",c);
    c=a|b;
    printf("\nC=%d",c);
    c=~a;
    printf("\nc=%d",c);
    c=a<<b;
    printf("\nc=%d",c);
    c=a>>b;
    printf("\nc=%d",c);

    return 0;
}
