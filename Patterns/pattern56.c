// this is a program to print the following pattern

// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A

#include <stdio.h>

int main()
{
  int i, j,n;
  char a = 'A';
  printf("Enter the size of the diagram : ");
  scanf("%d",&n);
  for (i = 1; i <= n; i++)
  {
    a = 'A';
    for (j = 1; j <= 2*n-1; j++)
    {
      if (j <= (n+1) - i || j >= (n-1) + i)
      {
        printf("%c", a);
        j < n ? a++ : a--;
      }
      else
      {
        printf(" ");
        if (j == n)
          a--;
      }
    }
    printf("\n");
  }

  return 0;
}