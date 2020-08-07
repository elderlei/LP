//Uri1010
//Calculo simples
#include <stdio.h>
 
int main(void) {
 
    int cod1,qt1,cod2,qt2;
    float vu1,vu2,tot;
    
    scanf("%d %d %f",&cod1,&qt1,&vu1);
    scanf("%d %d %f",&cod2,&qt2,&vu2);
    tot=vu1*qt1+vu2*qt2;
    printf("VALOR A PAGAR: R$ %.2f\n",tot);
 
    return (0);
}
