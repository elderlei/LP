//Uri1006
//Media 2
#include <stdio.h>
 
int main(void) {
 
    double a,b,c,m;
    
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a<=10 && b<=10 && c<=10){m=(2*a+3*b+5*c)/10;}
    else return 0;
    printf("MEDIA = %.1lf\n",m);
 
    return (0);
}
