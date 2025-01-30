#include <stdio.h>

    float c2f ( float);

    float c2f ( float c){
        //  fahrenheit = (celsius * 9.0 / 5.0) + 32;
        return ((9*c)/5)+32;

    }

int main(){
    float x = 37;
    printf("Celsius to Fahrenheit for %f is %.2f ",x,c2f(x));
    return 0;
}