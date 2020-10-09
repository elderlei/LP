//Uri-1080: Experiencias
#include <stdio.h>

int main(void) {
  int n,i,sapos=0,coelhos=0,ratos=0,qtd,total;
  char animal;
  scanf("%d",&n);  
  
  for (i=0;i<n;i++){
    scanf("%d %c",&qtd,&animal);
    if(animal=='C' ||animal=='c' ) coelhos+=qtd;
    if(animal=='S' ||animal=='s' ) sapos+=qtd;
    if(animal=='R' ||animal=='r' ) ratos+=qtd;
  }
  total=(coelhos+sapos+ratos);

  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",coelhos);
  printf("Total de ratos: %d\n",ratos);
  printf("Total de sapos: %d\n",sapos);
  printf("Percentual de coelhos: %.2f %%\n",(100.00*((float)coelhos/(float)total)));
  printf("Percentual de ratos: %.2f %%\n",(100.00*((float)ratos/(float)total)));
  printf("Percentual de sapos: %.2f %%\n",(100.00*((float)sapos/(float)total)));
  return 0;
}
