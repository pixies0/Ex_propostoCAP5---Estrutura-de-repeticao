#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int num, somaPar = 0, somaPrimo = 0, i;
  int j, flag, res;

  for (i = 0; i < 10; i++)
  {

    printf("Numero:");
    scanf("%d", &num);
    flag = 0;

    if (num % 2 == 0)
      somaPar += num;

    for (j = 1; j <= num; j++)
    {
      res = num % j;
      if (res == 0)
        flag++;
    }

    if (flag == 2)
      somaPrimo += num;
  }
  printf("Soma dos primos:%d\n", somaPrimo);
  printf("Soma dos pares:%d\n", somaPar);
}