#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, idade, altura;
  float peso;
  int media = 0, cont1 = 0, cont2 = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Idade:");
    scanf("%d", &idade);
    printf("Peso:");
    scanf("%f", &peso);
    printf("Altura:");
    scanf("%d", &altura);

    media = media + idade;

    if (peso > 90 && altura < 150)
      cont1++;

    if ((idade >= 10 && idade <= 30) && altura > 190)
      cont2++;
  }

  int percent;
  percent = (cont2 * 100) / 10;
  media = media / 10;

  printf("\nMedia de idades:%d\n", media);
  printf("Pessoas com +90kg e -150cm:%d\n", cont1);
  printf("%d%% pessoas entre 10 e 30 anos com +190cm", percent);

  return 0;
}