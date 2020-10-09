//Uri 1071: Soma de impares consecutivos
#include <stdio.h>

int main(void) {
  int i,valor1,valor2,tmp,soma;

  scanf("%d %d",&valor1,&valor2);
  //caso o segundo numero seja menor, inverte as referencias para viabilizar o loop
  if (valor2<valor1){
    tmp=valor1;
    valor1=valor2;
    valor2=tmp;
  }
  //se o valor inicial for par, subtrai 1 unidade para ser impar
  if (!(valor1%2)) {valor1--;}  
  //contagem de 2 em 2, a partir do proximo numero impar
  soma=0;
  valor1=valor1+2;
  for(;valor1<valor2;){    
    soma=soma+valor1;
    valor1=valor1+2;    
  }
  printf("%d\n",soma);
  return 0;
}
