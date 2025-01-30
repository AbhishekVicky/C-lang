#include <stdio.h>

    int Sum_Natural(int);

    int Sum_Natural(int n){
        if (n == 1)
        {
            return 1;
        }
        //sum(n) = 1+2+3+4+5+6+7.....+n
        // sum(n) = sum(n-1)+n
        return Sum_Natural(n-1)+n;
    }


int main(){

    int a =5 ;
    printf("The sum of first %d number is %d \n",a  , Sum_Natural(a));
}