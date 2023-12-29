

#include <stdio.h>

int
main ()
{
  int i;
  long int li;
  float f;
  double d;
  char c;

  printf ("integer: %dbytes", sizeof i);
  printf ("\nlong int: %dbytes", sizeof li);
  printf ("\nfloat: %dbytes", sizeof f);
  printf ("\ndouble: %dbytes", sizeof d);
  printf ("\nchar: %dbyte", sizeof c);



  return 0;
}
