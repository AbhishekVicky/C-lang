#include <stdio.h>
    // Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

    // Ye code mai confused hu bahut , agr ye line mai padh rha hu toh please ye code ko ache se samjhne ka try
    
    int* sum(int,int);
    int* sum( int a, int b ){
        int s = a + b;
        int* ptr = &s;
        printf("The sum is %d\n", s);
        return ptr;
    }

    float* average(float,float);
    float* average(float b ,float a){
        float avg = (a+b)/2.0;
        float* ptr = &avg;
        printf("The average is %f\n",avg);
        return ptr;
    }


int main(){
    int x = 5;
    int y = 7;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("The address of sum is %p and address of product is %u\n",ptr1 , ptr2);
    return 0;
} 
