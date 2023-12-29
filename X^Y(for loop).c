/*Calculating x to the power y*/

#include <stdio.h>

int main()
{   
    int x,y,i,r=1;
    scanf("%d%d",&x,&y);
    
    for(i=1;i<=y;i++)
    r=r*x;
    printf("%d",r);

    return 0;
}
