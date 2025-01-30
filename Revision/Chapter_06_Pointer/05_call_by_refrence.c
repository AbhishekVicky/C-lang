#include <stdio.h>
    //Sum should change the value of x..
    int sum(int* ,int*);

    int sum(int* a ,int* b){
        *a = 10;
        return (*a+*b);
    }
int main(){
    int x = 3, y =7;
    printf("The sum of x and y is %d \n",sum(&x,&y));
    printf("The value of x is %d\n",x);
    

    return 0;
}