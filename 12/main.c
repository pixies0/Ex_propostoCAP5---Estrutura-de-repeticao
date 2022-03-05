#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int num, i, contPrimo = 0;
  int j, flag, res;

  for (i = 0; i < 10; i++)
  {

    printf("Numero:");
    scanf("%d", &num);
    flag = 0;

    for (j = 1; j <= num; j++)
    {
      res = num % j;
      if (res == 0)
        flag++;
    }

    if (flag == 2)
      contPrimo++;
  }
  printf("Total de numeros primos:%d\n", contPrimo);
}