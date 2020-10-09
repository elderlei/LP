// Uri 1046: Tempo de jogo
#include <stdio.h>

int main(void) {
  int hora1,hora2;  
  int deltaTempo;

  scanf("%d %d",&hora1,&hora2);

  if (hora1>=0 && hora2>=0){
    deltaTempo=(hora2-hora1);
    if (deltaTempo<=0){deltaTempo+=24;}    
    
    printf("O JOGO DUROU %d HORA(S)\n",deltaTempo);    
  }
  return (0);
}
