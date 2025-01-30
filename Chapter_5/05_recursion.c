#include <stdio.h>

    int factorial(int);

    int factorial(int x){
        if (x == 1 || x == 0)  // Base condition
        {
            return 1;
        }

        // Factorial(n) : Factorial(n-1) x n
        return factorial(x-1)*x;
        
    }


int main(){
    int a ;
    printf("Enter number to get its factorial value :");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a , factorial(a));
    return 0;
}