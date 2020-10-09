// Uri 1064: Positivos e media

#include <stdio.h>

int main(void) {
  float valores[6],media=0;
  int i,count=0;

  for(i=0;i<6;i++){
    scanf("%f",&valores[i]);
    if (valores[i]>0) {count++;
    media=media+valores[i];}
  }
  printf("%d valores positivos\n",count);
  media/=count;
  printf("%.1f\n",media);

  return 0;
}
