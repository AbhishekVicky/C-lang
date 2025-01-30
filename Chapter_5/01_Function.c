#include <stdio.h>

//Function Prototype  //Always try to write this because it's a good practice.
int sum(int , int);
 
//Function Definition
int sum(int x , int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 5;
    int b = 10;
    // printf("The sum of a and b is %d\n", a+b); one to add
    // sum(a,b); This is another way with help function

    // int c = a+b;
    // printf("The sum is %d\n",c); 

    int c = sum(a,b);  //Function call
    printf("%d\n", c);

    int a1 = 4;
    int b1 = 9;
    // printf("The sum of a1 and b1 is %d\n", a1+b1);
    sum(a1,b1);

    int a2 = 12;
    int b2 = 14;
    // printf("The sum of a2 and b2 is %d\n", a2+b2);
    sum(a2,b2);

    int a3 = 20;
    int b3 = 19;
    // printf("The sum of a3 and b3 is %d\n", a3+b3);
    sum(a3,b3);
    return 0;
}