#include <stdio.h>

/*
CH-230-A
a3_p10
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main(){

    //inputs
    float a,b,p = 0;
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f", &b);

    //storing product in p
    productbyref(a,b,&p);

    printf("product a b = %f\n", product(a,b)); //function call inside printf
    printf("product by ref = %f\n", p);

    // modify by ref then printing a, b
    modifybyref(&a,&b);
    printf("modified a = %f\n", a);
    printf("modified b = %f\n", b);

    return 0;
}

float product(float a, float b){
    return a*b;
}

void productbyref(float a, float b, float *p){
    *p = a*b;
}

void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
}