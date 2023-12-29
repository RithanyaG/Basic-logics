#include <stdio.h>

int
main ()
{
  int a, b;
  char choice;

  printf ("+.Add\n-.Subtract\n*.Multiply\n/.Divide\n");
  printf ("Enter a and b and");
  scanf ("%c%d%d",&choice,&a,&b);
  printf("%c%d%d",choice,a,b);
  

  switch(choice)
    {
    case '+':
      printf("Sum of %d and %d is %d",a,b,a+b);
      break;
    case '-':
      printf("Difference of %d and %d is %d", a, b, a - b);
      break;
    case '*':
      printf("Product of %d and %d is %d", a, b, a * b);
      break;
    case '/':      
      printf("Quotient of %d and %d is %d", a, b, a / b);
      break;

    }  

 return 0;
    }