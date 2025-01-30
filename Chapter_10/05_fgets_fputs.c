#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("vicky.txt","w");
    // char c = fgetc(ptr);  //used to read a character from the file
    // printf("%c",c);
    fputc('c',ptr); //Whenever i have to use this , I have to on Write "w" mode..
    return 0;
}