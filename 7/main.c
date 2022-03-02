#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, idade, altura;
  float peso;
  int cont1 = 0, cont2 = 0, cont3 = 0;
  float soma1 = 0, media, percent;

  for (i = 0; i < 5; i++)
  {
    printf("Idade:");
    scanf("%d", &idade);
    printf("Altura em cm:");
    scanf("%d", &altura);
    printf("Peso em Kg:");
    scanf("%f", &peso);

    if (idade > 50)
      cont1++;

    if (idade >= 10 && idade <= 20)
    {
      soma1 = soma1 + altura;
      cont2++;
    }
    if (peso < 40)
      cont3++;
  }
  percent = (cont3 * 100) / 5;
  media = soma1 / cont2;

  printf("\nPessoas com mais de 50 anos:%d\n", cont1);
  printf("Media das alturas:%.2f\n", media);
  printf("%.2f%% pessoas pesam menos que 40Kg\n", percent);

  return 0;
}