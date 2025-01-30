#include <stdio.h>

int change (int );

int change (int a){
    a = 55;  //Misnomer
    return 0;
}

int main(){
    int b = 10;
    change(b); //The value of b remains 10..
    printf("The value of b is %d",b);
}