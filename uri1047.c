//Tempo de jogo com minutos
#include <stdio.h>

int main(void) {
  int hora1,min1;
  int hora2,min2;
  int tempo1,tempo2,deltaTempo;
  int deltaHoras,deltaMin;
  
  scanf("%d %d",&hora1,&min1);  
 
  scanf("%d %d",&hora2,&min2);  
  
  if (hora1>=0 && min1>=0 && hora2>=0 && min2>=0){

    tempo1=min1+hora1*60;
    tempo2=min2+hora2*60;
    deltaTempo=(tempo2-tempo1);
    if (deltaTempo<=0){deltaTempo+=(24*60);}    
    
    deltaHoras=((deltaTempo)/(60));
    deltaMin=(deltaTempo%60);
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",deltaHoras,deltaMin);    
  }
  return (0);
}
