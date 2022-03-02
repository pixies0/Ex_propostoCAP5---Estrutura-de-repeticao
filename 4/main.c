#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int num, i;
  printf("Numero:");
  scanf("%d", &num);

  for (i = 0; i <= 10; i++)
  {
    printf("%d x %d = %d\n", num, i, num * i);
  }
  return 0;
}