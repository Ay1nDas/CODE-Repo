#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a = 1, b = 1;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a);
    int c = a + b;
    a = b;
    b = c;
  }
  return 0;
}