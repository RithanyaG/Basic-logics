

#include <stdio.h>

int main()
{
    int f1,f2,f3,n,i;
    scanf("%d",&n);
    f1=1;
    f2=2;
    printf("%d\n%d\n",f1,f2);
    
    for(i=1;i<=n;i++)
      {
        
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d\n",f3);
      }

    return 0;
}
