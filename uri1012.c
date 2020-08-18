//Area

#include <stdio.h>

int main(void) {
  double a,b,c;
  double triR,circ,trap,quad,ret;

  scanf("%lf %lf %lf",&a,&b,&c);  

  triR=((a*c)/(2.0));
  circ=((3.14159)*(c*c));
  trap=(((a+b)*c)/2.0);
  quad=(b*b);
  ret=(a*b);
  
  printf("TRIANGULO: %.3lf\n",triR);
  printf("CIRCULO: %.3lf\n",circ);
  printf("TRAPEZIO: %.3lf\n",trap);
  printf("QUADRADO: %.3lf\n",quad);
  printf("RETANGULO: %.3lf\n",ret);

  return (0);
}
