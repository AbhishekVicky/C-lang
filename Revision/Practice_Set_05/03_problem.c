#include <stdio.h>

float force(float);

float force(float mass)
{
    return mass * 9.8; // force= m*g  (gravity(g) = 9.8ms)
}

int main()
{
    int mass =50;
    printf("Force of object with given mass %d is %.2f \n",mass,force(mass));
    
    return 0;
}