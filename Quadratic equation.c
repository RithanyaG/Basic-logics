

#include <stdio.h>
#include <math.h>

int
main ()
{
  float a, b, c, d, r1, r2;
  scanf ("%f%f%f", &a, &b, &c);
  d = b * b - 4 * a * c;
  if (d > 0)
    {
      printf ("Roots are real and unequal\n");
      r1 = (-b + sqrt (d)) / (2 * a);
      r2 = (-b - sqrt (d)) / (2 * a);
      printf ("r1=%f\nr2=%f", r1, r2);
    }
  else if (d < 0)

    printf ("Roots are imaginary\n");

  else
    {
      printf ("Roots are real and equal\n");
      r1 = -b / (2 * a);
      r2 = r1;
      printf ("r1=%f\nr2=%f", r1, r2);
    }
  return 0;
}
