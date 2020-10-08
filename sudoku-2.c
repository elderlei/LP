//sudoku (Método de avaliação pelo critério da soma dos quadrados)
// 5% de erro no URI
#include <stdio.h>

int teste_submatriz(int x[9][9],int,int,int,int);

int main(void) {
 int matriz[9][9];
 int i,l,c,n,soma=0,erroLinha=0,erroColuna=0,result=0; 
 int r1,r2,r3,r4,r5,r6,r7,r8,r9;

 scanf("%d",&n); 

 for(i=0;i<n;i++){
   //loop para leitura dos valores   
   for(l=0;l<9;l++){
     for(c=0;c<9;c++){
       scanf("%d",&matriz[l][c]);
     }
   }//fim do loop de leitura   

   /*
   //loop para escrita dos valores
   for(l=0;l<9;l++){
     for(c=0;c<9;c++){
       printf("%2d",matriz[l][c]);
     }
     printf("\n");
   }//fim do loop de escrita
   */

  //avaliação das linhas da matriz
  
  for(l=0;l<9;l++){
    soma=0;
     for(c=0;c<9;c++){
      soma=soma+((matriz[l][c])*(matriz[l][c])); //soma dos quadrados      
     }     
   }
   if (soma!=285){erroLinha++;}
   
   //avaliação das colunas da matriz
   
   for(c=0;c<9;c++){
     soma=0;
     for(l=0;l<9;l++){
      soma=soma+((matriz[l][c])*(matriz[l][c]));      
     }
   }
   if (soma!=285){erroColuna++;}
   
   if(erroLinha || erroColuna) printf("Instancia %d\nNAO\n",i+1);
   else {
     //TESTE DE CADA SUBMATRIZ 3x3 ATRAVÉS DE UMA FUNÇÃO
     r1=teste_submatriz(matriz,0,2,0,2);
     r2=teste_submatriz(matriz,3,5,0,2);
     r3=teste_submatriz(matriz,6,8,0,2);

     r4=teste_submatriz(matriz,0,2,3,5);
     r5=teste_submatriz(matriz,3,5,3,5);
     r6=teste_submatriz(matriz,6,8,3,5);

     r7=teste_submatriz(matriz,0,2,6,8);
     r8=teste_submatriz(matriz,3,5,6,8);
     r9=teste_submatriz(matriz,6,8,6,8);

     result=r1+r2+r3+r4+r5+r6+r7+r8+r9;
     if (result) printf("Instancia %d\nNAO\n",i+1);
     else printf("Instancia %d\nSIM\n",i+1);
   }
  printf("\n");
 } 
 return 0;
}

//Função para avaliar os mesmos critérios nas submatrizes
int teste_submatriz(int x[9][9],int l1,int l2,int c1,int c2){
  int l,c,soma=0,erro=0;
  for(l=l1;l<(l2+1);l++){
     for(c=c1;c<(c2+1);c++){
      soma=soma+((x[l][c])*(x[l][c]));      
     }     
   }
   if (soma!=285){erro++;}
  return erro;
}
