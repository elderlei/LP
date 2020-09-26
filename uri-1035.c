#include <stdio.h>

int main(void) {
  int A,B,C,D,par;
  
  scanf("%d%d%d%d",&A,&B,&C,&D);

  par=A%2;

  if(B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && par==0) 
  {printf("Valores aceitos\n");}
  else printf("Valores nao aceitos\n");
  return 0;
}
