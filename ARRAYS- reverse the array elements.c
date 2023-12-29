//reverse the array elements

#include <stdio.h>

int
main ()
{
  int rev[30], n, i, j, temp, a;
  printf ("Enter number of elements:");
  scanf ("%d", &n);
  printf ("Enter the array elements:");
  for (i = 0; i < n; i++)
    scanf ("%d", &rev[i]);
  printf ("The array elements are:");
  for (i = 0; i < n; i++)
    printf ("%d", rev[i]);

  j = i - 1;
  i = 0;

  while (i < j)
    {
      temp = rev[i];
      rev[i] = rev[j];
      rev[j] = temp;
      i++;
      j--;
    }

  for (i = 0; i < n; i++)
    printf ("\n %d", rev[i]);
}
