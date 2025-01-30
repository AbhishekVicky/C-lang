#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int x = 5, y = 8, z = 11;
    printf("The average of the given numbers is %.2f", average(x, y, z));
    return 0;
}