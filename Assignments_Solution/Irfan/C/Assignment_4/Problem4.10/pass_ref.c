#include <stdio.h>
#include <math.h>

/*
CH-230-A
a4_p10
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


void proddivpowinv(float a, float b, float *prod, 
                    float *div, float *pwr, float *invb);

int main(){

    //inputs
    float a,b, prod, div, pwr, invb;
    printf("A = ");
    scanf("%f", &a);

    printf("B = ");
    scanf("%f", &b);

    //Calculate and store values
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);

    //outputs and testing
    printf("\n");
    printf("Product = %f\n", prod);
    printf("Division = %f\n", div);
    printf("Power = %f\n", pwr);
    printf("InverseB = %f\n", invb);

    return 0;

}                    


void proddivpowinv(float a, float b, float *prod, 
                    float *div, float *pwr, float *invb){

    *prod = a*b;
    *div = a/b; //assuming a/b and not b/a
    *pwr = pow(a,b);                     
    *invb = 1/b;

    return;
}