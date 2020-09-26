#include <stdio.h>

int main(void) {
  int dist,th,vkm;
  float litros;

  scanf("%d%d",&th,&vkm);
  dist= (vkm*th);
  litros=dist/12.000;

  printf("%.3f\n",litros);
  return 0;
}
