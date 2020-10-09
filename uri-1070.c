// Uri 1070: Seis numeros impares
#include <stdio.h>

int main(void) {
  int i,valores,count;  

  scanf("%d",&valores);
  //se o valor for par, soma 1 unidade para ser impar
  if (!(valores%2)) {valores++;}
  count=1;
  //contagem de 2 em 2, a partir do proprio numero impar
  while(count<7){
    printf("%d\n",valores);
    valores=valores+2;    
    count++;
  }  
  return 0;
}
