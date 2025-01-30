#include <stdio.h>
int main()
{
    char a = 'H';
    char *b = &a; // b is a pointer pointing to to a( b is an character pointer.)
    float c = 5.5;
    float *c1 = &c;

    printf("The address of a is %u \n", &a);
    printf("The address of b is %u \n", b);
    printf("The address f c is %u \n", &c);
    printf("The value at c is %u \n", *c1);
    // printf("The address of d is %u \n",d);
    // printf("The value at d is %u \n",*(&d));

    return 0;
}
