#include <stdio.h>

/* 
CH-230-A
a6_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//Required Macro
#define SWAP(x,y,type) ({\
    type temp = x;\
    x = y;\
    y = temp;\
})

int main(){
    //Inputs!
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    double p,q;
    scanf("%lf", &p);
    scanf("%lf", &q);
    
    //Swaps
    SWAP(a,b,int);
    SWAP(p,q,double);

    //Outputs!
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%.6lf\n", p);
    printf("%.6lf\n", q);

    return 0;

}


