//Transpose of a matrix
#include <stdio.h>

int
main ()
{
  int matrix[10][10], transpose[10][10], m, n, i, j;
  printf ("Enter rows and columns :\n");
  scanf ("%d%d", &m, &n);
  printf ("Enter elements of the matrix\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf ("%d", &matrix[i][j]);
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      transpose[j][i] = matrix[i][j];
  printf ("Transpose of the matrix:\n");
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	printf ("%d\t", transpose[i][j]);
      printf ("\n");
    }
  return 0;
}
