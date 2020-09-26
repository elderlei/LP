#include <stdio.h>

int contador(unsigned long int, int);

int main(void) {
  int i;
  unsigned long int a,valor;  
  int divisores[]={100, 50, 20, 10, 5, 2, 1};

  scanf("%lu",&a);
  printf("%lu\n",a);   
  
  if (a>0 && a<1000000){    
    valor=contador(a,divisores[0]);   
    for (i=1;i<7;i++){
      valor=contador(valor,divisores[i]);     
    }    
  }
  return 0;
}

int contador(unsigned long int a,int b){
  long int count;
  count=0;  
  while (a>=b){
    a=a-b;
    count++;
  }
  printf("%lu nota(s) de R$ %d,00\n",count,b);
  return(a);
}
