// Uri 1065: Pares entre cinco numeros

#include <stdio.h>

int main(void) {
  int valores[5];
  int i,count=0;

  for(i=0;i<5;i++){
    scanf("%d",&valores[i]);
    if (!(valores[i]%2)) {count++;}
  }
  printf("%d valores pares\n",count);
  
  return 0;
}
