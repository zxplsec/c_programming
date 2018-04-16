int *** allocate_ar3d(int n1, int n2, int n3)
{
  int i, j;
  int *** ar = (int ***) malloc(n1 * sizeof(int **));
  for (i = 0; i < n1; i++) {
    ar[i] = (int **) malloc(n2 * sizeof(int *));
    for (j = 0; j < n2; j++)
      ar[i][j] = (int *) malloc(sizeof(int) * n3);
  }
  return ar;
}
