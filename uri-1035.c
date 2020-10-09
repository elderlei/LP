//Uri 1035: Teste de seleção 1

// Se B for maior do que C e se D for maior do que A, e a soma de C com D
// for maior que a soma de A e B e se C e D, ambos, forem positivos e se
// a variável A for par, escrever a mensagem "Valores aceitos".
// Senão, escrever "Valores nao aceitos"

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
