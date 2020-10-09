//Uri 1079: Medias ponderadas

#include <stdio.h>

int main(void) {
  int n,i;
  float num1,num2,num3;

  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%f %f %f",&num1,&num2,&num3);
    printf("%.1f\n",((num1*2+num2*3+num3*5)/10));
  }  
  return 0;
}
