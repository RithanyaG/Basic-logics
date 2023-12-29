//fibonacci-do while


#include <stdio.h>

int main()
{
    int f1,f2,f3,n,i;
    scanf("%d",&n);
    i=1;
    f1=0;
    f2=1;
    
    
    do
      {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
        i=i+1;
      }while(i<=n);

    return 0;
}
