//factors of a number

#include <stdio.h>

int main()
{
    int i,num;
    i=1;
    printf("Enter the number:");
    scanf("%d",&num);
    
    printf("The factors of %d:\n",num);
    
    l1: while(i<=num)
    {
       if(num%i==0) 
       printf("%d\n",i);
        i++;
          
    }

    return 0;
}
