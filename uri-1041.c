#include <stdio.h>

int main(void) {
  float px,py;

  scanf("%f%f",&px,&py);

  if (px==0.0 && py==0.0) printf("Origem\n");
  else if (px==0.0 && py!=0.0) printf("Eixo Y\n");
  else if (px!=0.0 && py==0.0) printf("Eixo X\n");
  else if (px>0.0 && py>0.0) printf("Q1\n");
  else if (px<0.0 && py>0.0) printf("Q2\n");
  else if (px<0.0 && py<0.0) printf("Q3\n");
  else printf("Q4\n");

  return 0;
}
