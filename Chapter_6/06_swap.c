#include <stdio.h>

void swap(int *, int *);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int y = 20;
    swap(&x, &y);
    printf("The value of x is %d and y is %d", x, y);
    return 0;
}