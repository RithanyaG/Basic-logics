
#include <stdio.h>

int main()
{
    int a=10,b=20;
    int c=a++ -b;
    printf("c=%d",c);
     
    int d=++a -b;
    printf("\nd=%d",d);
    
    int e=++a - ++b;
    printf("\ne=%d",e);
    
    int f=a++ - b++;
    printf("\nf=%d",f);
    
    int g=++a - b++;
    printf("\ng=%d",g);
    
    int h=a++ - ++b;
    printf("\nh=%d",h);
    

    return 0;
}
