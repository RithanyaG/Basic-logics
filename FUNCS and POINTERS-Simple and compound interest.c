//simple and compound interest-pointers

#include <stdio.h>
#include <math.h>

float simple_interest(float*p,float *r,float *t);
float compound_interest(float *p,float *r,float *t);
int main()
{
    float principle,roi,tp,si,ci;
    
    printf("Enter the principle:");
    scanf("\n%f",&principle);
    printf("Enter the roi:");
    scanf("\n%f",&roi);
    printf("Enter the tp:");
    scanf("\n%f",&tp);
    si=simple_interest(&principle,&roi,&tp);
    ci=compound_interest(&principle,&roi,&tp);
    printf("\nSimple interest=%f",si);
    printf("\nCompound interest=%f",ci);
    
}
    float simple_interest(float *p,float *r,float *t)
    {
        float si;
        si=(*p* *r* *t)/100;
         return(si);
    }
    
    float compound_interest(float *p,float *r,float *t)
    {
        float ci;
        ci=*p*(pow(1+(*r/100),*t));
         return(ci);
    }
    
