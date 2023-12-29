
//arithmetic operations using switch case-pointers

#include <stdio.h>

void main ()
{
  int a, b,*p,*q;
  char choice;
  printf ("Add(+)\nSubtract(-)\nMultiply(*)\nDivide(/)\n");
  printf ("\nEnter your choice:");
  scanf ("%c",&choice);

  printf ("Enter a and b:");
  scanf ("%d%d",&a,&b);
  p=&a;
  q=&b;
  
  switch(choice)
    {
    case '+':
      printf("Sum of %d and %d is %d", *p,*q, *p + *q);
      break;
    case '-':
      printf("Difference of %d and %d is %d", *p, *q, *p - *q);
      break;
    case '*':
      printf("Product of %d and %d is %d", *p,*q, *p * *q);
      break;
    case '/':      
      printf("Quotient of %d and %d is %d", *p, *q, *p / *q);
      break;
    
    }  
}

