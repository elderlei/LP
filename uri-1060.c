// Uri 1060: numeros positivos

#include <stdio.h>

int main(void) {
  float valores[6];
  int i,count=0;

  for(i=0;i<6;i++){
    scanf("%f",&valores[i]);
    if (valores[i]>0) count++;
  }
  printf("%d valores positivos",count);

  return 0;
}
