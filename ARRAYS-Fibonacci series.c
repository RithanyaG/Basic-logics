

#include <stdio.h>

int main()
{
    int fib[10]={0,1} ,i;
    for(i=2;i<10;i++)
      {
          fib[i]=fib[i-1]+fib[i-2];
      }
    printf("The fibonacci series is:");
    
    for(i=0;i<10;i++)
      printf("\n%d",fib[i]);
          
      
    return 0;
}
