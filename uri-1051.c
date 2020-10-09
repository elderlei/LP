// Uri 1051
//Imposto de renda

#include <stdio.h>
int main(void){
  float imposto,total;

  scanf("%f",&total);
  imposto=0;
  if (total>0){
    if (total<2000.000){
      imposto=0;
      printf("Isento\n");//O URI está com erro de correção
    }
    else if (3000.000>=total){
      imposto=(total-2000.00)*(0.08);
      printf("R$ %.2f\n",imposto);
    }
    else if(4500.000>=total){
      imposto=(3000.00-2000.00)*0.08+(total-3000.00)*(0.18);
  printf("R$ %.2f\n",imposto);
    }
    else if(total>4500.000){
      imposto=(3000.000-2000.00)*0.08+(4500.000-3000.00)*(0.18)+(total-4500.00)*(0.28);
      printf("R$ %.2f\n",imposto);
    }
  }
  
  return (0);
}
