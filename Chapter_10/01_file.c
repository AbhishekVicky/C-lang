#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("vicky.txt", "r");
     int num;
     fscanf(ptr,"%d",&num);
     printf("The first num is %d \n",num);

     fscanf(ptr,"%d",&num);
     printf("The first num is %d \n",num); //Here this is happening because next when it enters in the same file again it read the file again move to other elements of file.. 
     
     fclose(ptr); //It's a good practice and I have to always do this...
    return 0;
}