#include <stdio.h>

int main(){
    int marks [] = { 23, 53, 62, 77};
    int* ptr = &marks[0];
    // int* ptr = marks; //It's same as int* ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n",i,marks[i]);
        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;  //This is used to send pointer from one to another 
    }
    
    return 0;
}