//Uri1002
//Area do Circulo
#include <stdio.h>

int main(void) {
  //Calculo do circulo
  //π = 3.14159
  double pi= 3.14159,area,raio;
  
  scanf("%lf",&raio);
  area=pi*(raio*raio);
  printf("A=%.4lf\n",area);

  return 0;
}
