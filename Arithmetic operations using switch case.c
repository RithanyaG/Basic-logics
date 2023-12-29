//arithmetic operations using switch case

#include <stdio.h>

int
main ()
{
  int a, b,;
  char choice:

  printf ("+.Add\n-.Subtract\n*.Multiply\n\.Divide\n");
  printf ("Enter a and b:");
  scanf ("%d%d",&a,&b);
  printf ("\nEnter your choice-");
  scanf ("%c",&choice);

  switch(choice)
    {
    case '+':
      printf("Sum of %d and %d is %d", a, b, a + b);
      break;
    case '-':
      printf("Difference of %d and %d is %d", a, b, a - b);
      break;
    case '*':
      printf("Product of %d and %d is %d", a, b, a * b);
      break;
    case '\':      
      printf("Quotient of %d and %d is %d", a, b, a / b);
      break;
    default:
      printf("Enter your choice.");
      break;
    }  

 return 0;
    }
