#include <stdio.h>
#include <math.h>  // Include math.h for the pow function


int main(){
    float a = 5;
    printf("The area of a square is %f\n", pow(a,2)); //whenever we'll use pow function it's mandatory that we have to use "%f", also it'll work when 'int a' is there , and it doesn't matter that there is float or int ...
    return 0;
}