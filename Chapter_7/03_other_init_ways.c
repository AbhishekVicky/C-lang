#include <stdio.h>

int main(){
    int cgpa[3] = { 5,6,7};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    
    return 0;
}