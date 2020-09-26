#include <stdio.h>

#define MAX 1000000

int main(void) {
  char letra[MAX];
  int j,i,count,qt;

  scanf("%d",&qt);
  for(j=0;j<qt;j++){
    i=0;
    count=0;
    scanf("%s",letra);
  
    do{    
      if (letra[i]=='0'){count+=6;}
      if (letra[i]=='1'){count+=2;}
      if (letra[i]=='2'){count+=5;}
      if (letra[i]=='3'){count+=5;}
      if (letra[i]=='4'){count+=4;}
      if (letra[i]=='5'){count+=5;}
      if (letra[i]=='6'){count+=6;}
      if (letra[i]=='7'){count+=3;}
      if (letra[i]=='8'){count+=7;}
      if (letra[i]=='9'){count+=6;}
      i++;
    }while (letra[i]!='\0');
    printf("%d leds\n",count);
  }
  return 0;
}
