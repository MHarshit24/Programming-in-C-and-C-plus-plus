#include <stdio.h>

/*
CH-230-A
a3_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    float x;
    scanf("%f",&x);
    
    //input and validation
    int n;
    scanf("%d",&n);
    while (n < 1){
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }

    //output
    for (int i = 0; i < n; i++)
        printf("%f\n",x);


    return 0;

}