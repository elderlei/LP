//Uri 1073: Quadrado de pares
#include <stdio.h>

int main(void) {
  int n,i;
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    if(!(i%2)){
      printf("%d^2 = %d\n",i,i*i);
    }
  }
  return 0;
}
