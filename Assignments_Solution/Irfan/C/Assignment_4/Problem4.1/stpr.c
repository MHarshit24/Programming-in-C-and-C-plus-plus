#include <stdio.h>
#include <math.h>

/*
CH-230-A
a5_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //inputs
    float start, stop, step;
    scanf("%f", &start);
    scanf("%f", &stop);
    scanf("%f", &step);

    //outputs
    for(; start <= stop; start += step){
        printf("%f ", start);
        printf("%f ", start*start*M_PI);
        printf("%f\n", 2*M_PI*start);
    }

    return 0;
}
