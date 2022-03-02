#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, idade, altura;
  float peso;
  char corO, corC;

  int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
  int somaIdade = 0;

  for (i = 0; i < 6; i++)
  {
    printf("Idade:");
    scanf("%d", &idade);
    printf("Peso em Kg:");
    scanf("%f", &peso);
    printf("Altura em cm:");
    scanf("%d", &altura);
    printf("Cor dos olhos:");
    scanf(" %c", &corO);
    printf("Cor do cabelo:");
    scanf(" %c", &corC);

    if (idade > 50 && peso < 60)
      cont1++;

    if (altura < 150)
    {
      cont2++;
      somaIdade = somaIdade + idade;
    }

    if (corO == 'a' || corO == 'A')
      cont3++;

    if ((corC == 'r' || corC == 'R') && (corO != 'a' && corO != 'A'))
      cont4++;
  }

  int media, percent;
  media = somaIdade / cont2;
  percent = (cont3 * 100) / 6;

  printf("\nPessoas com +50anos e -60Kg:%d\n", cont1);
  printf("Media de idades -150cm:%d\n", media);
  printf("%d%% pessoas tem olhos azuis\n", percent);
  printf("Pessoas ruivas sem olhos azuis:%d\n", cont4);

  return 0;
}