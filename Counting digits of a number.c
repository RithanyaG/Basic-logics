

#include <stdio.h>

int main()
{
    int num,temp,count=0;
    scanf("%d",&num);
    temp=num;
    
    while(num!=0)
     {
         num=num/10;
         count++;
     }
    
printf("Number of digits in %d is %d.",temp,count);
    return 0;
}
