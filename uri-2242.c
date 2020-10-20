//Uri 2242
//Huaauhahhuahau

#include <stdio.h>
#include <string.h>

int main(void) {
  char risada[51], vogais[51];
  int tam,i,j,count=0;

  scanf("%s",risada);

  tam=strlen(risada);
 // printf("%d\n",tam);

  //inicializando a string
  for (i=0;i<(tam+1);i++){
    vogais[i]='\0';
  }
  
  //filtrgem das vogais
  for (i=0,j=0;i<tam;i++){
    if (risada[i]=='a'||risada[i]=='e'||risada[i]=='i'||risada[i]=='o'||risada[i]=='u'){
      vogais[j]=risada[i];
      j++;
      //vogais[j]='\0';
    }
  }
  
  tam=strlen(vogais);
  //printf("%d\n",tam);

  //contador de comparacao
  for(i=0;i<(tam);i++){
    //printf("%c - %c\n",vogais[i],vogais[tam-1-i]);
    if(vogais[i]==vogais[tam-1-i]){count++;}
  }
  //saída
  if (count==tam && tam!=0){printf("S\n");}
  else {printf("N\n");}
 
  return 0;
}
