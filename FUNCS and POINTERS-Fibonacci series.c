//fibonacci series-pointers

#include <stdio.h>
int fib(int*,int*,int*,int*);
int main()
{
    int f1,f2,f3,n,i;
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("\nThe fibonacci series is:");
        printf("\n%d\n%d",f1,f2);
    fib(&f1,&f2,&f3,&n);
   
    
}    
    int fib(int*f1,int*f2,int*f3,int*n)
    {
    int i;
    
    for(i=1;i<=*n-2;i++)
      {
        
        *f3=*f1+*f2;
        *f1=*f2;
        *f2=*f3;
        printf("\n%d",*f3);
      }


}
