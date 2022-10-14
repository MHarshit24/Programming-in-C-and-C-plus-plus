/*
CH-230-A
a7_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct person
{
    char name[30];
    int age;
};
    int age(struct person m, struct person n);
    int name(struct person m, struct person n);
    void bubble_sorting(struct person *arr,
    int n, int (*compare)(struct person m, struct person n));
    void print_bubbles(struct person *arr, int number_of_persons);
int age(struct person m, struct person n)
{
    if (m.age == n.age)
    {
        return strcmp(m.name, n.name);
    }
    else
    {
        return m.age - n.age;
    }
}
int name(struct person m, struct person n)
{
    if (strcmp(m.name, n.name) == 0)
    {
        return m.age - n.age;
    }
    else
    {
        return strcmp(m.name, n.name);
    }
}
void bubble_sorting(struct person *arr,
int n, int (*compare)(struct person m, struct person n))
{
    int swapped = 1;
    while(swapped == 1)
    {
        for (int idx = 1; idx <= n - 1; idx++)
        {
            if(compare(arr[idx - 1], arr[idx]) > 0)
            {
                struct person temp = arr[idx - 1];
                arr[idx - 1] = arr[idx];
                arr[idx] = temp;
                swapped = 0;
            }
        }
    }
}
void print_bubbles(struct person *arr, int number_of_persons)
{
    for(int idx = 0; idx < number_of_persons; idx++)
    {
        printf("{%s, %i}; ", arr[idx].name, arr[idx].age);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%i", &n);
    struct person * per;
    per = (struct person*) malloc(sizeof(struct person) * n);
    if (per == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", per[i].name);
        scanf("%d", &per[i].age);
    }
    bubble_sorting(per, n, name);
    print_bubbles(per, n);
    bubble_sorting(per, n, age);
    print_bubbles(per, n);
    free(per);
    return 0;
}