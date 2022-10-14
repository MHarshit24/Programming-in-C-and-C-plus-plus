#include <stdio.h>

/* 
CH-230-A
a6_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

#define MID_RANGE(a,b,c) ((float)(MIN3(a,b,c) + MAX3(a,b,c))/2)
//using two maxes for readable code.
#define MAX2(a,b) ((a > b) ? a : b)
#define MAX3(a,b,c) ((MAX2(a,b) > c) ? MAX2(a,b) : c)
//using two mins for readable code.
#define MIN2(a,b) ((a < b) ? a : b)
#define MIN3(a,b,c) ((MIN2(a,b) < c) ? MIN2(a,b) : c)


int main(){
    //inputs
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //calculation
    float out;
    out = MID_RANGE(a,b,c);

    //outputs
    printf("The mid-range is: %.6f\n", out);

    return 0;

}