#include <stdio.h>
int main(){
    int a = 7;
    int* b = &a; //b is a pointer pointing to to a( b is an integer pointer.)
    int c = 55;
    int* d = &b;

    printf("The address of a is %u \n",&a);
    printf("The address of a is %u \n",b);
    printf("The value at b is %u \n",*b);
    printf("The value at c is %u \n",*(&c));
    printf("The address of d is %u \n",d);
    // printf("The value at d is %u \n",*(&d));
    
    return 0;
}
