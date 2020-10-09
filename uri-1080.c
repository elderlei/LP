// Uri 1080: Maior e posição

#include <stdio.h>

int main(void) {
  int n,i,num[100],pos,maior;  
  
  maior=scanf("%d",&num[0]);
  pos=0;
  for (i=1;i<100;i++){
    scanf("%d",&num[i]);
    if(num[i]>maior) {
      maior=num[i];
      pos=i+1;}
  }
  printf("%d\n%d\n",maior,pos);
  return 0;
}
