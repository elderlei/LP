//Uri 1078: Tabuada

#include <stdio.h>

int main(void) {
  int n,i;

  scanf("%d",&n);
  for (i=1;i<=10;i++){
    printf("%d x %d = %d\n",i,n,i*n);
  }  
  return 0;
}
