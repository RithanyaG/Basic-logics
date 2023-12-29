//prime number between interval

#include <stdio.h>

int main()
{
    int high,low,i,j,stoper;
    stoper=0;
    printf("Enter the interval:");
    scanf("%d %d",&low,&high);
    
    for(i=low;i<=high;i++)
    {
    stoper=0;
    for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {stoper=1;
        break;}
      }
     if(stoper==0)
       printf("\n%d",i);
    }   

    return 0;
}
