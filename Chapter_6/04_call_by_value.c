#include <stdio.h>

    int sum (int ,int );

    int sum (int a , int b){
        a = 9; // Sum function cannot change x using a because copy of x is provided to sum in a .
        return a+b;
    }


int main(){
    int x = 4;
    int y = 5;
    printf("The sum of x and y is %d\n", sum(x,y));
    printf("The value of x is %d", x);
    return 0;
}