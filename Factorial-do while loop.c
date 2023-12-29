//factorial-do while loop

#include <stdio.h>

int main()
{
    int i=1,n,f=1;
    
    scanf("%d",&n);
    
    do
   { 
    f=f*i;
    i++;
   } 
   while(i<=n);
    printf("%d factorial is %d",n,f);


    return 0;
}
