// Uri 1019: Conversão de tempo

#include <stdio.h>

int main(void) {
  int segundos,horas,minutos;

  scanf("%d",&segundos);

  horas=segundos/3600;
  segundos=segundos%3600;
  minutos=segundos/60;
  segundos=segundos%60;

  printf("%d:%d:%d\n",horas,minutos,segundos);

  return 0;
}
