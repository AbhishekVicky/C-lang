#include <stdio.h>

int main(){
    // int radius = 5;
    // int height = 10;

    int radius, height;
    printf("Enter value of radius : \n");
    scanf("%d",&radius);

    printf("Enter value of height : \n");
    scanf("%d", &height);
    
    printf("Area of a circle is %f with radius %d \n", 3.14*radius*radius, radius);
    printf("Area of a cylinder is %f with radius %d and height %d \n", 3.14*radius*radius*height, radius , height);
    
    return 0;
}