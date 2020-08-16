// Triangulo

#include <stdio.h>
#include <stdlib.h>

int criterio(int,int,int);
int main(void) {
  int a,b,c,d;
  int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12;

  scanf("%d %d %d %d",&a,&b,&c,&d);

  if ((a>=1 && a<=100) && (b>=1 && b<=100) && (c>=1 && c<=100) && (d>=1 && d<=100)){
    c1=criterio(a,b,c);
    c2=criterio(b,c,a);
    c3=criterio(c,a,b);

    c4=criterio(b,c,d);
    c5=criterio(c,d,b);
    c6=criterio(d,b,c);

    c7=criterio(c,d,a);
    c8=criterio(d,a,c);
    c9=criterio(a,c,d);

    c10=criterio(d,a,b);
    c11=criterio(a,b,d);
    c12=criterio(b,d,a);

    if ((c1+c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12)>=3){    
      printf("S\n");
    }
    else {
      printf("N\n");
    }
  }  

  return 0;
}

int criterio(int l1,int l2,int l3){
  int s,d;
  s=l2+l3;
  d=abs(l2-l3);
  if (l1<s && l1>d){return 1;}
  else return 0;
}
