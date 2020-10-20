//Uri 1332
//Um-dois-tres

#include <stdio.h>
#include <string.h>

int main(void) {
  int qtd,i;
  char palavra[6];

  scanf("%d",&qtd);

  for(i=0;i<qtd;i++){
    scanf("%s",palavra);
    if(strlen(palavra)==5){printf("3\n");}
    else{
      if((palavra[0]=='o'&& palavra[1]=='n') || (palavra[0]=='o'&& palavra[2]=='e')|| (palavra[1]=='n'&& palavra[2]=='e')){printf("1\n");}
      else printf("2\n");
    }   
  }
  return 0;
}
