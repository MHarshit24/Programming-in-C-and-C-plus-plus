#include <stdio.h>

/*
CH-230-A
a2_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    float a,b,h;

    // printf("a = ");
    scanf("%f", &a);

    // printf("b = ");
    scanf("%f", &b);
    
    // printf("f = ");
    scanf("%f", &h);

    printf("square area=%f\n",a*a);
    printf("rectangle area=%f\n",a*b);
    printf("triangle area=%f\n", a*h/2);
    printf("trapezoid area=%f\n",(a+b)*h/2);

    return 0;

}