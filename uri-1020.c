// Uri 1020: Idade em dias

#include <stdio.h>

int main(void) {
  int dia,ano,mes;

  scanf("%d",&dia);

  ano=dia/365;
  dia=dia%365;
  mes=dia/30;
  dia=dia%30;

  printf("%d ano(s)\n",ano);
  printf("%d mes(es)\n",mes);
  printf("%d dia(s)\n",dia);
  return 0;
}
