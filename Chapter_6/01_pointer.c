#include <stdio.h>

int main(){
    int y = 76;
    int* z = &y;    // z is a pointer pointing to y  (j is an integer pointer)
    int k = 78;
    int* ptr = NULL;
    printf("The address of y is %p\n",&y); //here &y means address of y;
    printf("The address of y is %p\n",z);  
    printf("The address of z is %p\n",&z);  
    printf("The address of k is %p\n",&k);
    printf("The address of prt is %p\n",ptr);  // It's a NULL Pointer

    // If we want to print the value , here are two ways
    printf("The address of z is %d\n",*z);
    printf("The address of z is %d", *(&y));
    return 0;
}