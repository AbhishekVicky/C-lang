#include <stdio.h>

    int function_5(int* );

    int function_5(int* new){
        printf("The value of ptr is %d\n",new);
        printf("The value at ptr is %d\n",*new);
        return 5;
    }

int main(){
    int i = 8;
    int* ptr = &i;
    printf("The address of i is %d\n",&i);
    function_5(ptr);
    return 0;
}