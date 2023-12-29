/*Sum of N numbers*/

#include <stdio.h>

int main()
{
    int sum=0,i,ini,fin,incr;
    scanf("%d%d%d",&ini,&fin,&incr);
    
    for(i=ini;i<=fin;i+=incr)
    sum=sum+i;
    
    printf("sum=%d",sum);

    return 0;
}
