#include <iostream>

using namespace std;

/* 
CH-230-A
a9_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//required function
void subtract_max(int A[], int n);

//required function
void deallocate(int A[]);

//To print array,
void printA(int A[], int n);

int main(){
    //Input number of intergers
    int n;
    cout << "Number of integers = ";
    cin >> n;
    cin.ignore();

    //setup array
    int *A = new int[n];
    if(A == NULL){
        cout << "Allocation failure";
        exit(1);
    }
    for(int i = 0; i < n; i++){
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    //showcase array
    cout << "Array = ";
    printA(A, n);

    //show array after calling subtract_max
    subtract_max(A,n);
    cout << "After subtract_max, Array = ";
    printA(A,n); cout << endl;

    //deallocate Array
    deallocate(A);
    return 0;
}

//Deletes A, since A[] passed by reference by default.
void deallocate(int A[]){
    delete[] A;
}

//Finds max in one loop and then subtracts from each ele in second loop.
//Arrays are always call by reference in C++
void subtract_max(int A[], int n){
    int max = A[0];
    for(int i = 0; i < n; i++)
        if(A[i] > max)
            max = A[i];
    for(int i = 0; i < n; i++)
        A[i] -= max;
}

//Prints array, repeated code, so made into funciton.
void printA(int A[], int n){
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}