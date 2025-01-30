#include <stdio.h>

int main(){
    int a = 5;
    int* b = &a;
    int** c = &b;

    printf("The value of a is %u \n",a);
    printf("The value of a is %u \n",*b);
    printf("The value of a is %u \n",*(&a));
    printf("The value of a is %u \n",**c);
    printf("The value of a is %u \n",**(&b));
    // printf("The value of a is %u \n",);
    
    return 0;
}