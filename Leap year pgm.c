/*leap year-(it should get divided by 4 but not by 100) OR (it should get divided by 400)*/

#include <stdio.h>

int main()
{   
    int year;
    scanf("%d",&year);
    
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    
       printf("%d is a leap year",year);
    else
       printf("%d is not a leap year",year);
    return 0;
}
