//Uri 1043
//Triangulo

#include <stdio.h>
#include <math.h>

int criterio(float,float,float);
int main(void) {
  float a,b,c,per,area;
  int c1,c2,c3;

  scanf("%f %f %f",&a,&b,&c);
  c1=criterio(a,b,c);
  c2=criterio(b,c,a);
  c3=criterio(c,a,b);

  if (c1==c2==c3==1){
    per=a+b+c;
    printf("Perimetro = %2.1f\n",per);
  }
  else {
    area=((a+b)*c)/2;
    printf("Area = %2.1f\n",area);
  }

  return 0;
}

int criterio(float l1,float l2,float l3){
  float s,d;
  s=l2+l3;
  d=fabs(l2-l3);
  if (l1<s && l1>d){return 1;}
  else return 0;
}
