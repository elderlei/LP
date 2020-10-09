//Uri 1072: Intervalo 2
#include <stdio.h>

int main(void) {
  long int x;
  int n,i,countIn=0,countOut=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%ld",&x);
    if(x>=10 && x<=20) countIn++;
    else countOut++;
  }
  printf("%d in\n",countIn);
  printf("%d out\n",countOut);
  return 0;
}
