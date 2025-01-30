#include <stdio.h>

int main(){
    int input=10;

    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n",input , i , input*i);
    }
    
    return 0;
}