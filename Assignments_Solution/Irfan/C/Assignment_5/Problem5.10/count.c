#include <stdio.h>

/* 
CH-230-A
a5_p10
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
int recPrint(int n);

int main(){

    //self-explanatory inputs and outputs
    int n;
    printf("n = ");
    scanf("%d", &n);
    recPrint(n);

    return 0;
}

//function defn of recPrint
int recPrint(int n){
    if(n <= 0)
        return -1;
    else if(n == 1)
        return printf("%d\n",n); //newline at end

    printf("%d ",n); //print in one line
    return recPrint(n-1);    
}