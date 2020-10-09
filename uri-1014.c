// Uri 1014: Consumo

#include <stdio.h>

int main(void) {
  double dist,lit,consumo;

  scanf("%lf %lf",&dist,&lit);
  consumo=dist/lit;
  printf("%.3lf km/l\n",consumo);
  return 0;
}
