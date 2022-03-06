#include <stdio.h>
#include <stdlib.h>
//

int main(void)
{
  int idade, i, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
  float peso, media1 = 0, media2 = 0, media3 = 0, media4 = 0;

  for (i = 0; i < 15; i++)
  {
    printf("Idade:");
    scanf("%d", &idade);
    printf("Peso em Kg:");
    scanf("%f", &peso);

    if (idade < 0)
      printf("Idade unvalida");
    else if (idade <= 10)
    {
      media1 += peso;
      cont1++;
    }
    else if (idade <= 20)
    {
      media2 += peso;
      cont2++;
    }
    else if (idade <= 30)
    {
      media3 += peso;
      cont3++;
    }
    else
    {
      media4 += peso;
      cont4++;
    }
  }
  media1 = media1 / cont1;
  media2 = media2 / cont2;
  media3 = media3 / cont3;
  media4 = media4 / cont4;

  printf("\nMedia peso 1 a 10 anos: %.2fKg\n", media1);
  printf("Media peso 11 a 20 anos: %.2fKg\n", media2);
  printf("Media peso 21 a 30 anos: %.2fKg\n", media3);
  printf("Media peso +30 anos: %.2fKg\n", media4);
}