//Uri 1074: Par ou impar
#include <stdio.h>

int main(void) {
  long int valor;
  int i,n;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%ld",&valor);
    if (!(valor%2)&&(valor!=0)) printf("EVEN");
    if ((valor%2)) printf("ODD");
    if ((valor>0)) printf(" POSITIVE\n");
    if ((valor<0)) printf(" NEGATIVE\n");
    if (valor==0) printf("NULL\n");
  }  
  return 0;
}
