#include <stdio.h>

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = 5 * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 X %d is %d \n", (i+1),a[i]);
        
    }
    

    return 0;
}