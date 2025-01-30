#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("Enter side of square:");
    scanf("%d",&side);

    printf("The area of square with side %d is %.2f",side,pow(side,2));
    return 0;
}