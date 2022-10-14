#include <stdio.h>

/*
CH-230-A
a3_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

float to_pounds(int kg, int g);

int main(){

    int kg,g;
    scanf("%d\n%d",&kg,&g);
    printf("Result of conversion: %f\n", to_pounds(kg,g));

    return 0;
}

//required function, for conversion
float to_pounds(int kg, int g){
    return (kg+0.001*g)*2.2;
}