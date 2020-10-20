//Uri1009
//Salario com Bonus
#include <stdio.h>
 
int main(void) {
 
    char a[10];
    double b,c,sal;
    
    scanf("%s %lf %lf",a,&b,&c);
    sal=(b+c*0.15);
    printf("TOTAL = R$ %.2lf\n",sal);
 
    return (0);
}
