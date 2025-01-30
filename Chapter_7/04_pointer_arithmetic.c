#include <stdio.h>

int main()
{

    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 6;
    int *ptr = &a;
    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", ptr);
    ptr++;  //Here it'll not increment 1 , it'll increment 4 because here it's taking 4bytes to store a pointer 
    printf("The address of a is %u \n", ptr);


    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'X';
    char *ptr1 = &b;
    printf("The address of b is %u \n", &b);
    printf("The address of b is %u \n", ptr1);
    ptr1++;  //Here it'll increment 1 , 
    printf("The address of b is %u \n", ptr1);
    return 0;
}