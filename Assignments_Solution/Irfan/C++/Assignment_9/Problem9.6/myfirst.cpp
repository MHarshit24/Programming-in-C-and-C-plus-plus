#include <iostream>
#include <cctype>

/* 
CH-230-A
a9_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//overloading myfirst.
int myfirst(int A[], int n);
double myfirst(double A[], int n);
char myfirst(char A[], int n);

//returns 1 if char a is vowel, otherwise 0
int isVowel(char a);

int main(){

    //8 elements in all arrays
    int lenght = 8;

    int ints[] = {1, -2, 3, 5, 10, 103, 65, 4};
    double doubles[] = {1.1, -1.1, -31.2, 54.6, -3, 42, -7, 5};
    char chars[] = {'y', 'r', 'k', 'h', 'z', 'e', 'p', 'a'};  

    //outputs
    std::cout << "myfirst(ints) = " << myfirst(ints, lenght) << std::endl;
    std::cout << "myfirst(doubes) = " << myfirst(doubles, lenght) << std::endl;
    std::cout << "myfirst(chars) = " << myfirst(chars, lenght) << std::endl;

    return 0;   
}

// A[i]%2 == 0 used to check if even
int myfirst(int A[], int n){
    int ret = -1;
    for(int i = 0; i < n; i++)
        if(A[i] > 0 && A[i] % 2 == 0){
            ret = A[i];
            break;
        }
    return ret;
}

// (int)A[i] is done as a floor.
double myfirst(double A[], int n){
    double ret = -1.1;
    for(int i = 0; i < n; i ++)
        if((int)A[i] == A[i] && A[i] < 0){
            ret = A[i];
            break;
        }
    return ret;
}

// uses isVowel and isalpha to do logic
char myfirst(char A[], int n){
    char ret = '0';
    for(int i = 0; i < n; i++)
        if(!isVowel(A[i]) && isalpha(A[i])){
            ret = A[i];
            break;
        }
    return ret;
}

//user-defined function to check if vowel
int isVowel(char a){
    if(
        a == 'a' ||
        a == 'e' ||
        a == 'i' ||
        a == 'o' ||
        a == 'u' ||
        a == 'A' ||
        a == 'E' ||
        a == 'I' ||
        a == 'O' ||
        a == 'U'
    )
        return 1;
    else
        return 0;

}