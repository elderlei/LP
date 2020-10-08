//Sudoku (metodo de comparação de elementos por varredura na matriz
// 20% de erro no URI
#include <stdio.h>

int comparaValor(int x[9][9],int,int);

int teste_submatriz(int x[9][9],int,int,int,int,int,int);

int main(void) {
  int matriz[9][9];
  int n,inst,res1,i,j,l,c; 

  scanf("%d",&n); 

  for(inst=0;inst<n;inst++){

    //loop para leitura dos valores   
    for(l=0;l<9;l++){
      for(c=0;c<9;c++){
        scanf("%d",&matriz[l][c]);
      }
    }//fim do loop de leitura   

  
    //avaliação das linhas e colunas da matriz principal
    for(i=0;i<9;i++){
      for(j=0;j<9;j++){
        res1=comparaValor(matriz,i,j);
      }
    }

    if (res1>0) printf("Instancia %d\nNAO\n\n",inst+1);
     //se houver repetição em alguma linha ou coluna, res1>0 e não é uma solução para 
     //o Sudoku. Caso contrario, vai paa a segunda etapa da análise, em submatrizes 
     //3x3
    else{
      int l1,l2,c1,c2,res2=0,total=0;
      //TESTE DE CADA SUBMATRIZ 3x3 ATRAVÉS DE UMA FUNÇÃO    
      for(l1=0,l2=2;l1<7 && l2<9;(l1=l1+3),(l2=l2+3)){
        for(c1=0,c2=2;c1<7 && c2<9;(c1=c1+3),(c2=c2+3)){
          //printf("Matriz 3x3 de a[%d][%d] a a[%d][%d]: \n",l1,c1,l2,c2);
          for(i=l1;i<=l2;i++){
            for(j=c1;j<=c2;j++){
              res2=teste_submatriz(matriz,i,j,l1,l2,c1,c2);
              total=total+res2;
              //printf("Elemento a[%d][%d]= %d | res= %d\n",i,j,matriz[i][j],res2);
            }
          }
        }
      }     
      if (total>0) printf("Instancia %d\nNAO\n\n",inst+1);
      else printf("Instancia %d\nSIM\n\n",inst+1);
    }
  }
  
  return 0;
}

int comparaValor(int matrix[9][9],int lin,int col){

  int i,j,count=0;
  
  //comparação do elemento enviado para a função com todos os demais na mesma linha
  for(j=0;j<9;j++){    
    if(matrix[lin][col]==matrix[lin][j]){
      count++;
    }
  }

  //comparação do elemento enviado para a função com todos os demais na mesma coluna
  for(i=0;i<9;i++){
    if(matrix[lin][col]==matrix[i][col]){
      count++;
    }
  }

  // se não houver repetição, a contagem total deve ser =2, que é a identificação do elemento com ele mesmo nas varreduras
  if (count>2) return 1;
  else return 0;
}

int teste_submatriz(int matrix[9][9],int lin,int col,int l1,int l2,int c1,int c2){
  int i,j,count=0;
  //comparação do elemento enviado para a função com todos os demais na mesma linha
  for(j=c1;j<c2;j++){    
    if(matrix[lin][col]==matrix[lin][j]){
      count++;
    }
  }

  //comparação do elemento enviado para a função com todos os demais na mesma coluna
  for(i=l1;i<l2;i++){
    if(matrix[lin][col]==matrix[i][col]){
      count++;
    }
  }

  // se não houver repetição, a contagem total deve ser =2, que é a identificação do elemento com ele mesmo nas varreduras
  if (count>2) return 1;
  else return 0;

}