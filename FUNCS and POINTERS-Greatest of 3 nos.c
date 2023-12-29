

#include <stdio.h>
int greatest(int *a,int *b,int *c);

int main()
{
    int a,b,c,result;
    scanf("%d%d%d",&a,&b,&c);
    
    result=greatest(&a,&b,&c);
    printf("The greatest nuber is:%d",result);
    
}
    
int greatest(int*a,int*b,int*c)
{
    int result;
     if((*a>*b)&&(*a>*c))
         result=*a;
      else 
            if(*b>*c)
              result=*b;
            else
              result=*c;
    return (result);
}
