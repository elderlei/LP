#include <stdio.h>
int main(void) {  
  int dxy;
  float tempo;
  
  scanf("%d",&dxy);
  
  tempo=((float)dxy)/30;
  tempo=tempo*60;

  printf("%d minutos\n",(int)tempo);

  return 0;
}
