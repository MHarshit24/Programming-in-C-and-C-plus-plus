#include <stdio.h>
#include <string.h>

/* 
CH-230-A
a7_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//macro to fit under 80 characters.
#define P_ struct Person 
struct Person{
    char name[30];
    int age;
};


//bubblesort for struct Persons accepting comparison functions.
void bubblesort(P_ ps[], int n, int (*compr)(P_ A, P_ B)); 

//compares two struct Persons alhpabetically
int alphComp(P_ x, P_ y);

//compares two struct Persons age-wise
int ageComp(P_ x, P_ y);

//prints out one person
void printPerson(P_ p);

//prints out a list of persons.
void printLPersons(P_ ps[], int n);

int main(){

    //inputs
    int n;
    printf("Number of People = ");
    scanf("%d", &n);

    P_ A[n];
    for(int i = 0; i < n; i++){
        getchar();
        printf("Name = ");
        fgets(A[i].name, 30, stdin);
        A[i].name[strlen(A[i].name) - 1] = '\0';
        printf("Age = ");
        scanf("%d", &A[i].age);
        printf("\n");
    }

    //outputs
    //alphabetical then agewise to get specified format
    //by taking advantage of bubblesorts algo.
    printf("-------------------------------------------\n");
    printf("Age Wise\n");
    bubblesort(A, n, alphComp);
    bubblesort(A, n, ageComp);
    printLPersons(A,n);
    printf("\n");

    //agewise then alphabetically
    printf("-------------------------------------------\n");
    printf("Alphabetically\n");
    bubblesort(A, n, ageComp);
    bubblesort(A, n, alphComp);
    printLPersons(A,n);
    printf("\n");
    printf("-------------------------------------------\n");

}

//bubblesort for struct Persons accepting comparison functions.
void bubblesort(P_ ps[], int n, int (*compr)(P_ A, P_ B)){
    int swapflag = 0;
    P_ temp;
    while (!swapflag){
        swapflag = 1;
        for(int i = 0 ; i < n - 1; i++){
            if (compr(ps[i], ps[i+1]) == 1){
                temp = ps[i];
                ps[i] = ps[i+1];
                ps[i+1] = temp;

                swapflag = 0;
            }
        }
    }
}

//compares two struct Persons alhpabetically
int alphComp(P_ x, P_ y){
    return strcmp(x.name, y.name);
}

//compares two struct Persons age-wise
int ageComp(P_ x, P_ y){
    return x.age > y.age ? 1 : (x.age < y.age ? -1 : 0);
}

//prints out one person
void printPerson(P_ p){
    printf("{%s, %d}; ", p.name, p.age);
    return;
}

//prints out a list of persons.
void printLPersons(P_ ps[], int n){
    for(int i = 0; i < n; i++)
        printPerson(ps[i]);
    return;
}