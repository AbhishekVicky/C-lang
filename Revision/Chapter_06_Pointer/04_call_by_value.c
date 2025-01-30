#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{
     a = 10; //Sum function cannot change x using copy of x is provided to sum in a
    return a + b;
}

int main()
{
    int x = 4, y = 5;
    printf("The sum of x and y is %d \n", sum(x, y));
    printf("The value of x is %d \n",x);
    

    return 0;
}