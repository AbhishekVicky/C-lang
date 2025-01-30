#include <stdio.h>

    int fibonacci(int);
    int fibonacci(int n){
        // 0,1,1,2,3,5,8,13,21,34,…
        if (n==1 || n==2)
        {
            return n-1;
        }
        
        return fibonacci(n-1) + fibonacci(n-2);

    }


int main(){
    int x = 3;
    printf("The value of fibonacci series at %d is %d",x,fibonacci(x));
    return 0;
}