#include <stdio.h>

int main(){
    int product = 1;
    int n = 5;
    for (int i = 1; i <=n; i++)
    {
        product*=i;
    printf("The factorial of %d is %d\n",n,product);
    }
    printf("The factorial of %d is %d\n",n,product);
    return 0;
}