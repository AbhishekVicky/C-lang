#include <stdio.h>
    //Function prototype
    int sum ( int , int);

    //Function Definition
    int sum (int x, int y){
        printf("The sum of %d and %d is %d\n",x,y,x+y);
    }

int main(){
    int a =6;
    int b = 4;
    // sum(a,b);  //Function call
    int c = sum(a,b);
    printf("%d\n",c);

    int a1 = 12;
    int b1 = 34;
    sum(a1,b1);

    int a2 = 33;
    int b2 = 77;
    sum(a2,b2);
    return 0;
}