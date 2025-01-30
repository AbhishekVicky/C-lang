#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("append.txt", "a");  
    int num = 32;
    fprintf(fptr, "%d", num); // Here, there is one no problem like if we try to re-write the code it'll delete the whole element and write the given code...
    fclose(fptr);
    return 0;
}