//URI-1383: Sudoku
//( Pelo método de avaliação pelo critério da soma dos quadrados)

#include <stdio.h>

int teste_submatriz(int x[9][9],int,int,int,int);

int main(void) {
 int matriz[9][9];
 int n,i;

 scanf("%d",&n); 

 for(i=0;i<n;i++){
   int l,c,n,soma=0;
   int erro=0;
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
     //printf("Soma da linha %d = %d\n",l,soma); //depuração
     if (soma!=285){erro++;}
   }
   //printf("\nerro: %d\n",erro);   
   
   //avaliação das colunas da matriz   
   for(c=0;c<9;c++){
     soma=0;
     for(l=0;l<9;l++){
      soma=soma+((matriz[l][c])*(matriz[l][c]));
     }
     //printf("Soma da coluna %d = %d\n",l,soma); //depuração
     if (soma!=285){erro++;}
   }
   //printf("\nerro: %d\n",erro); //depuração
   
   //  
   //Conclusao final da primeira parte do teste. Só realiza o segundo teste se o 
   //primeiro não indicar erro
   //
   //printf("\nContagem de erros: %d\n",erro);
   if(erro>0) printf("Instancia %d\nNAO\n\n",i+1);
   else {
     int result=0,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0;
     //TESTE DE CADA SUBMATRIZ 3x3 ATRAVÉS DE UMA FUNÇÃO
     //printf("Segunda etapa de avaliacao...\n"); //depuração
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
     //printf("\nContagem de erros: %d\n",result); //depuração
     if (result) printf("Instancia %d\nNAO\n\n",i+1);
     else printf("Instancia %d\nSIM\n\n",i+1);
   }  
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
