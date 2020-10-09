// Uri 1059: Numeros pares

#include <stdio.h>

int main(void) {
  int i;
  for(i=1;i<=100;i++){
    if(!(i%2)) printf("%d\n",i);
  }
  return 0;
}
