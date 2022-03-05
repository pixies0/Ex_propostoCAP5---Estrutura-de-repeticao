#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int i, parcela = 6;
  float preco, precoFinal, precoAvista, precoPar, acrescimo = 3;

  printf("Valor do carro: R$");
  scanf("%f", &preco);
  precoAvista = preco - (preco * 0.2);

  printf("Final\t\tNumParcela\tAcrescimo\tValorParcela\n");
  printf("R$%.2f\tA vista\t\t0%%\t\tR$0\n", precoAvista);

  for (i = 0; i < 10; i++)
  {
    precoFinal = preco + preco * (acrescimo / 100);
    precoPar = preco / parcela;
    printf("R$%.2f\t%d\t\t%.2f%%\t\tR$%.2f\n", precoFinal, parcela, acrescimo, precoPar);
    parcela += 6;
    acrescimo += 3;
  }
}