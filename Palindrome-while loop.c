

#include <stdio.h>

int main()
{
    int n,a,b=0,pal;
    printf("Enter the number:");
    scanf("%d",&n);
    pal=n;
    
    while(n!=0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf("Reversed number is %d.",b);
    
    if(pal==b)
      printf("%d is a palindrome.",pal);
    else
      printf("%d is not a palindrome.",pal);
    return 0;
}
