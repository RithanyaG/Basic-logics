//Deleting an array element
#include <stdio.h>

int
main ()
{
  int ins[30], i, p;
  printf ("Enter the array elements:");
  for (i = 0; i < 5; i++)
    scanf ("%d", &ins[i]);
  printf ("The array elements are:\n");
  for (i = 0; i < 5; i++)
    printf ("%d\n", ins[i]);

  printf ("Enter the element that has to be deleted:");
  scanf ("%d", &p);

  for (i = 0; i < 5; i++)
    {
      if (ins[i] == p)
	while (i++ < 5)
	  ins[i - 1] = ins[i];
    }
  printf ("The new array:");
  for (i = 0; i < 4; i++)
    printf ("\n%d", ins[i]);

  return 0;
}
