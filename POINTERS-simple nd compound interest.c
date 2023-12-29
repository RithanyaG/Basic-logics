//simple and compound interest-pointers

#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t,si,ci,*a,*b,*c;
    a=&p;
    b=&r;
    c=&t;
    
    printf("Enter the principle:");
    scanf("\n%f",a);
    printf("Enter the roi:");
    scanf("\n%f",b);
    printf("Enter the tp:");
    scanf("\n%f",c);
    
    
    si=(*a * *b * *c)/100;
     printf("\nSimple interest=%f",si);
    
    
    ci=*a*(pow(1+(*b/100),*c));
     printf("\nCompound interest=%f",ci);
    }
    
