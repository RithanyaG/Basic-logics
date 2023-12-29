// armstrong number
#include <stdio.h>

int main()
{
    int num,store,output,x;
    output=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
    store=num;
    
    while(store!=0)
    {
        x=store%10;
        output=output+x*x*x;
        store=store/10;
    }
    
    if(output==num)
      printf("%d is an armstrong number.",num);
    else
      printf("%d is not an armstrong number.",num);
      
    return 0;
}
