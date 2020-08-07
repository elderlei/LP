//Uri 1061
// Tempo de eum evento

//Tempo de um evento
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int dia1,hora1,min1,seg1;
  int dia2,hora2,min2,seg2;
  int tempo1,tempo2,deltaDia,deltaTempo;
  int deltaHoras,deltaMin,deltaSeg;

  scanf("Dia %d",&dia1);  
  scanf("%d : %d : %d",&hora1,&min1,&seg1);
  
  scanf("\nDia %d",&dia2); 
  scanf("%d : %d : %d",&hora2,&min2,&seg2);
  
  
  if (dia1>=0 && hora1>=0 && min1>=0 && seg1>=0 && dia2>=0 && hora2>=0 && min2>=0 && seg2>=0){

    tempo1=seg1+min1*60+hora1*3600+dia1*24*3600;
    tempo2=seg2+min2*60+hora2*3600+dia2*24*3600;
    deltaTempo=abs(tempo2-tempo1);    
    deltaDia=deltaTempo/(3600*24);
    deltaHoras=((deltaTempo)%(3600*24))/(3600);
    deltaMin=(deltaTempo%3600)/60;
    deltaSeg=(deltaTempo%3600)%60;    

      printf("%d dia(s)\n",deltaDia);
      printf("%d hora(s)\n",deltaHoras);
      printf("%d minuto(s)\n",deltaMin);
      printf("%d segundo(s)\n",deltaSeg);
    
  }
  return (0);
}
