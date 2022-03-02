#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i;
  float valor, totalV = 0, totalP = 0, totalC = 0;
  char cod;

  for (i = 0; i < 15; i++)
  {
    printf("Codigo:");
    scanf(" %c", &cod);
    printf("Valor: R$");
    scanf("%f", &valor);

    if (cod == 'v' || cod == 'V')
    {
      totalV = totalV + valor;
      totalC = totalC + valor;
    }

    if (cod == 'p' || cod == 'P')
    {
      totalP = totalP + valor;
      totalC = totalC + valor;
    }
  }

  printf("\nCompras a vista: R$%.2f\n", totalV);
  printf("Compras a prazo: R$%.2f\n", totalP);
  printf("Total das compras: R$%.2f\n", totalC);
  printf("primeira parcela de 3: R$%.2f\n", totalP / 3);

  return 0;
}