#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  char sexo, resposta;
  int i, contSim = 0, contNao = 0, contM = 0, contF = 0, percent;

  for (i = 0; i < 10; i++)
  {
    printf("Sexo M/F:");
    scanf(" %c", &sexo);
    printf("Resposta S/N:");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S')
    {
      contSim++;
      if (sexo == 'f' || sexo == 'F')
        contF++;
    }

    if (resposta == 'n' || resposta == 'N')
    {
      contNao++;
      if (sexo == 'm' || sexo == 'M')
        contM++;
    }
  }

  percent = (contM * 100) / 10;
  printf("Pessoas respoderam sim:%d\n", contSim);
  printf("Pessoas respodenram nao:%d\n", contNao);
  printf("Mulheres q responderam sim:%d\n", contF);
  printf("%d%% homens responderam nao", percent);
  return 0;
}