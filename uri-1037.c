#include <stdio.h>

int main(void) {
  char inter1[]="Intervalo [0,25]";
  char inter2[]="Intervalo (25,50]";
  char inter3[]="Intervalo (50,75]";
  char inter4[]="Intervalo (75,100]";
  double num;

  scanf("%lf",&num);

  if (num>=0.0 && num<=100.0){
    if (num>=0.0 && num<=25.0) printf("%s\n",inter1);
    else 
      if (num>25.0 && num<=50.0) printf("%s\n",inter2);
      else
        if (num>50.0 && num<=75.0) printf("%s\n",inter3);
        else printf("%s\n",inter4);
  }else printf("Fora de intervalo\n");
    
  return 0;
}
