#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("vicky.txt", "w");
    int num = 432;
    fprintf(fptr, "%d", num); // Here is one problem if we try to re-write the code it'll delete the whole element and write the given code...
    fclose(fptr);
    return 0;
}