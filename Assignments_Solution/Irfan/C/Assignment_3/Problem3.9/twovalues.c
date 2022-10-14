#include <stdio.h>

/*
CH-230-A
a3_p9
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

double sum25(double v[], int n);

int main(){

    double vals[20];
    int n;

    //inputs
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%lf",&vals[i]);

    if (sum25(vals,n) == -111){
        printf("One or both positions are invalid\n");
        return 0; //early return to avoid the printf.
    }

    printf("sum=%lf\n", sum25(vals,n));
    return 0;    
}

//function definition
double sum25(double v[], int n){
    if (n <= 5)
        return -111;

    return v[2] + v[5];    
}