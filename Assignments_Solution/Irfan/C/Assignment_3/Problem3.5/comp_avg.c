#include <stdio.h>

/*
CH-230-A
a3_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function prototypes
void C2Farray(double C[], double F[], int dim);//array conv. store result in F
double C2F(double c); //Celsius to Fahrenheit

void printArray(double C[], int dim); //print Array
double sumD(double C[], int dim); //to sum doubles

int main(){

    char c;
    printf("c = ");
    scanf("%c",&c);
    int n;
    printf("n = ");
    scanf("%d",&n);

    double C[100];
    double F[100]; //to store values in Fahrenheit

    // input and setup
    for (int i = 0; i<n; i++){
        printf("n%d = ", i);
        scanf("%lf", &C[i]);
    }
    //Precompute array of Fahrenheit values
    C2Farray(C,F,n); 

    //pretty printing
    printf("\n");

    //control logic
    switch(c){
        case 's':
            printf("Sum of temperatures is %lf",sumD(C,n));
            break;

        case 'p':
            printArray(C,n);
            break;

        case 't':
            printArray(F,n);
            break;

        default:
            printf("Average temperature is %lf", sumD(C,n)/n);
            break;
    }

    return 0;

}

//Function definitions below

void C2Farray(double C[], double F[], int dim){
    for (int i = 0; i < dim; i++)
        F[i] = C2F(C[i]);
    return;
}

double C2F(double c){
    return 9*c/5 + 32;
}

void printArray(double C[], int dim){
    for(int i = 0; i < dim; i++)
        printf("%i. %.1lf\n",i, C[i]); //1 decimal precision
}

double sumD(double C[], int dim){
    double sum = 0;
    for (int i =0; i < dim; i++)
        sum += C[i];
    return sum;
}