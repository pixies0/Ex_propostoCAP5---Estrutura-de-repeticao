#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, idade, op, cont1 = 0, cont2 = 0, cont3 = 0, media = 0, percent;

  for (i = 0; i < 15; i++)
  {
    printf("Idade:");
    scanf("%d", &idade);
    printf("1 - Regular\n2 - Bom\n3 - Otimo\nOpiniao:");
    scanf("%d", &op);

    if (op == 3)
    {
      cont1++;
      media += idade;
    }
    if (op == 1)
      cont2++;

    if (op == 2)
      cont3++;
  }

  media = media / cont1;
  percent = (cont3 * 100) / 15;

  printf("\nMedia idade otimo:%d\n", media);
  printf("%d pessoas votou regular\n", cont2);
  printf("%d%% pessoas votou bom\n", percent);

  return 0;
}