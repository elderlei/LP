//URI 1182: COLUNA DA MATRIZ
#include <stdio.h>

int main(void) {
 float matriz[12][12];
 int l,c,coluna;
 float soma=0.0,media=0.0;
 char opc;

 scanf("%d",&coluna);
 scanf(" %c",&opc);

 for(l=0;l<12;l++){
   for(c=0;c<12;c++){
     scanf("%f",&matriz[l][c]);
     if(c==coluna){soma=soma+matriz[l][c];}
   }
 }
 if(opc=='S'){printf("%.1f\n",soma);}
 if(opc=='M'){
   media=soma/12;
   printf("%.1f\n",media);}
  return 0;
}
