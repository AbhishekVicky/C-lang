#include <stdio.h>

int main(){
    int x, y;
    printf("Enter length: ");
    scanf("%d",&x);
    
    printf("Enter breadth: ");
    scanf("%d",&y);

    printf("The are of rectangle with length %d and breadth %d is %d", x , y , x*y);

    return 0;
}