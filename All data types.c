

#include <stdio.h>

int
main ()
{
  int a = 1;
  long int b = 1234;
  float c = 1.2;
  double d = 123.4;
  char e = 'A';

  printf ("Integer=%d", a);
  printf ("\nLong int=%ld", b);
  printf ("\nFloat=%f", c);
  printf ("\nDouble=%lf", d);
  printf ("\nCharacter=%c", e);

  return 0;
}
