

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    
    if(a>b)
    printf("%d is the greatest number\n%d is the smallest number.",a,b);
    
    else
    printf("%d is the greatest number\n%d is the smallest number.",b,a);

    return 0;
}
