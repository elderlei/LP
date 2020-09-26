#include <stdio.h>

int main(void) {
  float valores[]={0.00,4.00,4.50,5.00,2.00,1.50};
  float total;
  int pos,quant;

  scanf("%d%d",&pos,&quant);

  total=valores[pos]*quant;

  printf("Total: R$ %.2f\n",total);


  return 0;
}
