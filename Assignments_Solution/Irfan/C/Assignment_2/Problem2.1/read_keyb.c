#include <stdio.h>

/*
CH-230-A
a2_p1.c
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    double a,b;
    scanf("%lf\n%lf",&a,&b);
    printf("sum of doubles=%lf\n",a+b);
    printf("difference of doubles=%lf\n",a-b);
    printf("square=%lf\n",a*a);

    int p,q;
    scanf("%d\n%d",&p,&q);
    printf("sum of integers=%d\n",p+q);
    printf("product of integers=%d\n",p*q);
    
    char x,y;
    // getchar();
    scanf("\n%c\n%c", &x, &y);
    printf("sum of chars=%d\n",x+y);
    printf("product of chars=%d\n",x*y);
    printf("sum of chars=%c\n",x+y);
    printf("product of chars=%c\n", x*y);
    return 0;

}