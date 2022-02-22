#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i;
  int a, b, c, d;
  int aux;

  for (i = 1; i <= 5; i++)
  {
    printf("Digite quatro valores:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Ordem Lida: %d %d %d %d\n", a, b, c, d);

    do
    {
      if (a > d)
      {
        aux = a;
        a = d;
        d = aux;
      }
      if (a > b)
      {
        aux = a;
        a = b;
        b = aux;
      }
      if (b > c)
      {
        aux = b;
        b = c;
        c = aux;
      }
      if (c > d)
      {
        aux = c;
        c = d;
        d = aux;
      }
    } while (a > d || a > b || b > c || c > d);

    printf("Ordem crescente: %d %d %d %d\n", a, b, c, d);
    printf("Ordem decrescente: %d %d %d %d\n", d, c, b, a);
    printf("i:%d\n", i);
  }
  return 0;
}