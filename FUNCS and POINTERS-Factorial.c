
#include <stdio.h>
void fact (int *f, int *n);
void
main ()
{
  int i, n, f = 1;
  scanf ("%d", &n);
  i = n;
  fact (&f, &n);
  printf ("%d factorial is %d", i, f);
}

void
fact (int *f, int *n)
{
  while (*n >= 1)
    {
      *f = *f * *n;
      *n = *n - 1;
    }

}
