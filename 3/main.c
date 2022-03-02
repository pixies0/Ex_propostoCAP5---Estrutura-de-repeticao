#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, idade;
  float ate15 = 0, ate30 = 0, ate45 = 0, ate60 = 0, mais60 = 0;
  float percent1, percent2;

  for (i = 0; i < 8; i++)
  {
    printf("Idade da pessoa %d:", i + 1);
    scanf("%d", &idade);

    if (idade <= 15)
      ate15++;
    else if (idade <= 30)
      ate30++;
    else if (idade <= 45)
      ate45++;
    else if (idade <= 60)
      ate60++;
    else
      mais60++;
  }
  system("pause");
  system("cls");
  printf("Faixa 1: %.1f pessoas\n", ate15);
  printf("Faixa 2: %.1f pessoas\n", ate30);
  printf("Faixa 3: %.1f pessoas\n", ate45);
  printf("Faixa 4: %.1f pessoas\n", ate60);
  printf("Faixa 5: %.1f pessoas\n", mais60);

  puts("");
  percent1 = (ate15 * 100) / 8;
  percent2 = (mais60 * 100) / 8;
  printf("%.2f%% pessoas na faixa 1\n", percent1);
  printf("%.2f%% pessoas na faixa 5\n", percent2);

  return 0;
}