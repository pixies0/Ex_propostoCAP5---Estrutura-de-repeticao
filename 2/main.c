#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float valIngresso, despesa = 200, lucro;
  float quantidade = 120;
  float qtdMax = quantidade, valMax = valIngresso, lucroMax;
  printf("Ingressos\tValor\tLucro\n");
  lucroMax = (valMax * qtdMax) - despesa;

  for (valIngresso = 5; valIngresso >= 1; valIngresso = valIngresso - 0.5)
  {
    lucro = (valIngresso * quantidade) - despesa;
    printf("%.2f\t\t%.2f\t%.2f\n", quantidade, valIngresso, lucro);
    if (lucro > lucroMax)
    {
      lucroMax = lucro;
      valMax = valIngresso;
      qtdMax = quantidade;
    }
    quantidade = quantidade + 26;
  }
  system("pause");
  system("cls");
  printf("Melhor configuracao:\n");
  printf("Venda ingressos a R$%.2f\n", lucroMax);
  printf("Tera %.2f pessoas\n", qtdMax);
  printf("Obtendo o lucro maximo de R$%.2f\n", lucroMax);
  return 0;
}