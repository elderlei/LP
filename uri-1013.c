// Uri 1013: O maior

#include <stdio.h>
#include <stdlib.h>
int maior(int,int);
int main(void) {
  int a,b,c,res;

  scanf("%d %d %d",&a,&b,&c);

  
  res=maior(maior(a,b),c);

  printf("%d eh o maior\n",res);

  return 0;
}

int maior(int a,int b){
  int res;
  res=(a+b+abs(a-b))/2;
  return (res);
}
