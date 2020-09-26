#include <stdio.h>

int main(void) {
  int i;
  unsigned long int a,nota_100,nota_50,nota_20,nota_10,nota_5,nota_2,nota_1;  

  scanf("%lu",&a);
  printf("%lu\n",a);

  if (a>0 && a<1000000){
    nota_100=a/100;
    printf("%lu nota(s) de R$ 100,00\n",nota_100);
    a=a%100;
    nota_50=a/50;
    printf("%lu nota(s) de R$ 50,00\n",nota_50);
    a=a%50;
    nota_20=a/20;
    printf("%lu nota(s) de R$ 20,00\n",nota_20);
    a=a%20;
    nota_10=a/10;
    printf("%lu nota(s) de R$ 10,00\n",nota_10);
    a=a%10;
    nota_5=a/5;
    printf("%lu nota(s) de R$ 5,00\n",nota_5);
    a=a%5;
    nota_2=a/2;
    printf("%lu nota(s) de R$ 2,00\n",nota_2);
    nota_1=a%2;
    printf("%lu nota(s) de R$ 1,00\n",nota_1);
  }  
  
  return 0;
}
