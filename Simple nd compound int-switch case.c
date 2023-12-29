//simple and compound interest-switch case

#include <stdio.h>

int main()
{
    float principle,roi,tp,si,ci;
    char choice;
    printf("1.Simple interest\n2.Compound interest\n");
    printf("Enter your choice:");
    scanf("%c",&choice);
     
     switch(choice)
     {
         case '1':
         printf("Enter principle,roi and tp:");
         scanf("%f%f%f",&principle,&roi,&tp);
         si=(principle*roi*tp)/100;
         printf("Simple interest=%f",si);
         break;
         
         case '2':
         printf("Enter principle,roi and tp:");
         scanf("%f%f%f",&principle,&roi,&tp);
         ci=principle*(pow(1+(roi/100),tp));
         printf("Compound interest=%f",ci);
         break;
         
     }

    return 0;
}
