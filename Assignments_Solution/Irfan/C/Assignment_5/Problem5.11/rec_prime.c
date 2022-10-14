#include <stdio.h>

/*
CH-230-A
a5_p11
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//recursive function to test primeness.
int isPrime(int p, int n);

int main(){

    //inputs
    int n;
    scanf("%d", &n);
    
    //outputs
    if(isPrime(n , 2))
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;    
}

//Marches up from isPrime(p, 2) to isPrime(p, p)~
int isPrime(int p, int n){

    if(n > p || n < 2)
        return 0; //for false call  
    //if(n==p)
     //   return 0; //special case for when integer is 1      
    if(n==p)
        return 1;
    if(p%n == 0)
        return 0;

    return isPrime(p,n+1);        
}







