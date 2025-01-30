#include <stdio.h>

int main(){
    int n = 4;
    printf("%d %d %d ", n , ++n , n++);
    // 6 6 4 compilation from right to left
    // 4 5 5 compilation from left to right
    return 0;
}