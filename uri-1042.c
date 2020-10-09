// Uri 1042: Sort Simples

#include <stdio.h>

int main(void) {
  int num[4],temp,k,i,novo[4];

  for(i=0;i<3;i++){
    scanf("%d",&num[i]);
    novo[i]=num[i];
  }
  for(k=0;k<2;k++){
    for(i=0;i<2;i++){      
      if (novo[i+1]<novo[i]) {
        temp=novo[i];
        novo[i]=novo[i+1];
        novo[i+1]=temp;
      }
    }    
  }
  
  for(i=0;i<3;i++){
    printf("%d\n",novo[i]);    
  }
  printf("\n");
  for(i=0;i<3;i++){
    printf("%d\n",num[i]);    
  }
  return 0;
}
