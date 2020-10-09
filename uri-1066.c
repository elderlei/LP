//Uri 1066: Pares, impares, positivos...

#include <stdio.h>

int main(void) {
  int valores[5];
  int i,countPar=0,countImpar=0,countPos=0,countNeg=0;

  for(i=0;i<5;i++){
    scanf("%d",&valores[i]);
    if (!(valores[i]%2)) {countPar++;}
    if ((valores[i]%2)) {countImpar++;}
    if ((valores[i]>0)) {countPos++;}
    if ((valores[i]<0)) {countNeg++;}
  }
  printf("%d valor(es) par(es)\n",countPar);
  printf("%d valor(es) impar(es)\n",countImpar);
  printf("%d valor(es) positivo(s)\n",countPos);
  printf("%d valor(es) negativo(s)\n",countNeg);
  
  return 0;
}
