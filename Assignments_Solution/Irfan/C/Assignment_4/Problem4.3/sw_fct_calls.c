#include <stdio.h>
#include <math.h>

/*
CH-230-A
a4_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function prototypes
float geometric_mean(float arr[], int num);
float highest(float arr[], int num);
float lowest(float arr[], int num);
float sum(float arr[], int num);

int main(){

    float A[15], input = 0;
    int dim = 0;

    //input handling.
    while (dim < 15){
        printf("input %d = ", dim + 1);
        scanf("%f", &input);
        if (input <= 0){
            printf("\nEntered a negative, saving input");
            break;
        }
        A[dim] = input;
        dim++;
    }

    char c;
    printf("\n\nchoice(m/h/l/s) = ");
    scanf("\n%c", &c);
    int repeat = 0; //repeat for input checking.
    do{
        switch(c){
            case 'm':
                printf("\nGeometric Mean = %f", geometric_mean(A,dim));
                repeat = 0;
                break;
            case 'h':
                printf("\nHighest Value = %f", highest(A,dim));
                repeat = 0;
                break;
            case 'l':
                printf("\nSmallest Value = %f", lowest(A,dim));
                repeat = 0;
                break;
            case 's':
                printf("\nSum = %f", sum(A,dim));
                repeat = 0;
                break;
            default:
                printf("\nIncorrect choice. Choose again.");
                printf("\n\nchoice(m/h/l/s) = ");
                scanf("\n%c", &c);
                repeat = 1;        
        }
    } while (repeat);

    return 0;
}

//function definitions ahead.

float geometric_mean(float arr[], int num){
    float prod = 1;
    for (int i = 0; i < num; i++)
        prod *= arr[i];

    return pow(prod,(float)1/num);        
}

float highest(float arr[], int num){
    float h; //sanitize h
    if (arr != NULL)
        h = arr[0];
    else
        return -1;

    for (int i = 0; i < num; i++)
        if (arr[i] >= h)
            h = arr[i];

    return h;
}

float lowest(float arr[], int num){
    float l; //sanitize l
    if (arr != NULL)
        l = arr[0];
    else 
        return -1;

    for (int i = 0; i < num; i++)
        if (arr[i] <= l)
            l = arr[i];

    return l;
}

float sum(float arr[], int num){
    float sum = 0;
    for (int i = 0; i < num; i++)
        sum += arr[i];
    return sum;    
}
