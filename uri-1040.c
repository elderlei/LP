// Uri 1040: Média 3

#include <stdio.h>

int main(void) {
  float n1,n2,n3,n4,media,exame;

  scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

  media=(n1*2+n2*3+n3*4+n4*1)/10.0;

  printf("Media: %.1f\n",media);

  if(media>=7.0) printf("Aluno aprovado.\n");
  else if (media<5.0) printf("Aluno reprovado.\n");
  else if (media>=5.0 && media<=6.9){
    printf("Aluno em exame.\n");
    scanf("%f",&exame);
    printf("Nota do exame: %.1f\n",exame);
    media=(media+exame)/2;
    if(media>=5.0) {printf("Aluno aprovado.\n");}
    else {if (media<=4.9) printf("Aluno reprovado.\n");}
    printf("Media final: %.1f\n",media);
  }
  return 0;
}
