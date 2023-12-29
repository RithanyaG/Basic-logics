/*Positive or negative*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    if(a>0)
      printf("%d is positive",a);
    else
       if(a<0)
         printf("%d is negative",a);
       else
         printf("The given number is neither positive nor negative");

    return 0;
}
