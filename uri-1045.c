//Uri 1045
//Tipos de triangulos

#include <stdio.h>
#include <math.h>

void ordena(double *triangulo);
int criterio(double,double,double);
void tRet(double,double,double);
void tObt(double,double,double);
void tAcu(double,double,double);
void tEq(double,double,double);
void tIso(double,double,double);
int main(void) {
  double triangulo[3];
  float per,area;
  int c1;

  scanf("%lf %lf %lf",&triangulo[0],&triangulo[1],&triangulo[2]);

  ordena(triangulo);     

  c1=criterio(triangulo[0],triangulo[1],triangulo[2]);


  if (c1 || triangulo[0]<=0 || triangulo[1]<=0 ||triangulo[2]<=0){ printf("NAO FORMA TRIANGULO\n"); }
  else {
    tRet(triangulo[0],triangulo[1],triangulo[2]);
    tObt(triangulo[0],triangulo[1],triangulo[2]);
    tAcu(triangulo[0],triangulo[1],triangulo[2]);
    tEq(triangulo[0],triangulo[1],triangulo[2]);
    tIso(triangulo[0],triangulo[1],triangulo[2]);
  }

  return 0;
}

void ordena(double *triangulo){
  int i,j;
  double tmp;
  for (j=0;j<3;j++){
    for (i=0;i<3;i++){
      if (triangulo[i+1]>triangulo[i]){
        tmp=triangulo[i];
        triangulo[i]=triangulo[i+1];
        triangulo[i+1]=tmp;
      }
    }
  }  
}


int criterio(double l1,double l2,double l3){
  float s;
  s=l2+l3;  
  if (l1>=s){return 1;}
  else return 0;
}

void tRet(double l1,double l2,double l3){
  float sq;
  sq=(l2*l2)+(l3*l3);
  //printf("\n %.1lf %.1lf %.1lf ",l1,l2,l3); 
  if ((l1*l1)==sq){printf("TRIANGULO RETANGULO\n");}
}

void tObt(double l1,double l2,double l3){
  float sq;
  sq=(l2*l2)+(l3*l3);
  //printf("\n %.1lf %.1lf %.1lf ",l1,l2,l3); 
  if ((l1*l1)>sq){printf("TRIANGULO OBTUSANGULO\n");}
}

void tAcu(double l1,double l2,double l3){
  float quad,sq;
  quad=(l1*l1);
  sq=(l2*l2)+(l3*l3); 
  //printf("\n %.1lf %.1lf %.1lf ",l1,l2,l3); 
  if (quad<sq){printf("TRIANGULO ACUTANGULO\n");}
}

void tEq(double l1,double l2,double l3){
  //printf("\n %.1lf %.1lf %.1lf ",l1,l2,l3);   
  if (l1==l2 && l2==l3){printf("TRIANGULO EQUILATERO\n");}
}

void tIso(double l1,double l2,double l3){
  //printf("\n %.1lf %.1lf %.1lf ",l1,l2,l3);   
  if ((l1==l2 && l2!=l3) || (l2==l3 && l3!=l1) || (l3==l1 && l1!=l2)){printf("TRIANGULO ISOSCELES\n");}
}
