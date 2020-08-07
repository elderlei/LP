//Uri 1036
//Formula de Bhaskara
#include <stdio.h>
#include <math.h>

int main(void) {
  double a,b,c,delta,raizDelta,raiz1,raiz2;

  scanf("%lf %lf %lf",&a,&b,&c);
  delta=(b*b-4*a*c);
  if(delta<0 || a==0){
    printf("Impossivel calcular\n");
  }
  else {
    raizDelta=sqrt(delta);
    raiz1=((-b)+raizDelta)/(2*a);
    raiz2=((-b)-raizDelta)/(2*a);
    printf("R1 = %.5lf\n",raiz1);
    printf("R2 = %.5lf\n",raiz2);
  }
  return (0);
}
