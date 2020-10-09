// Uri 1067: Numeros impares

#include <stdio.h>

int main(void) {
  int valores;
  int i,countPar=0,countImpar=0,countPos=0,countNeg=0;

  scanf("%d",&valores);
  for(i=0;i<=valores;i++){    
    if ((i%2)) {printf("%d\n",i);}
  }
  
  return 0;
}
