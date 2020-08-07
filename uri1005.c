//Uri1005
//Media 1

#include <stdio.h>
 
int main(void) {
 
    double a,b,m;
    
    scanf("%lf %lf",&a,&b);
    if (a<=10 && b<=10){m=(3.5*a+7.5*b)/11;}
    else return 0;
    printf("MEDIA = %.5lf\n",m);
 
    return (0);
}
