

#include <stdio.h>

int main()
{
    int a,b;
    char choice;
    printf("+.Add\n-.Subtract\n*.Multiply\n/.Divide\n");
    scanf("%c%d%d",&choice,&a,&b);
    
    if (choice=='+')
      printf("Sum of %d and %d is %d",a,b,a+b);
    else if (choice=='-')
           printf("Difference of %d and %d is %d", a, b, a - b);
         else if (choice=='*')
                  printf("Product of %d and %d is %d", a, b, a * b);
              else if (choice=='/')
                     printf("Quotient of %d and %d is %d", a, b, a / b);
    

    return 0;
}
