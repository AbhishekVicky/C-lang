#include <stdio.h>

void swap(int *, int *);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5, b = 13;
    swap(&a, &b);
    printf("The value of a is %d and b is %d \n", a, b);
    return 0;
}