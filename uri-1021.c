//Uri 1021: Notas e moedas

#include <stdio.h>

float contador(float, float);

int main(void) {
  int i;
  float a,valor;
  float divisores[]={100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

  scanf("%f",&a);
  
  if (a>=0 && a<=1000000.00){
    printf("NOTAS:\n");
    valor=contador(a,divisores[0]);
    
    for (i=1;i<6;i++){
      valor=contador(valor,divisores[i]);
    }
    printf("MOEDAS:\n");
    for (i=6;i<12;i++){
      valor=contador(valor,divisores[i]);
    }
  }
  return 0;
}

float contador(float a,float b){
  float c;
  int count;
  count=0;
  if(b<=0.010){c=0.001;}
  else c=b;
  while (a>=c){
    a=a-b;
    count++;
  }
  if (b>=2){
    printf("%d nota(s) de R$ %.2lf\n",count,b);
  }
  else printf("%d moeda(s) de R$ %.2lf\n",count,b);
  
  //printf("resto: %.8f\n",a);  
  return(a);
}
