#include <stdio.h>

// By Do while
int main(){
    int i =1;
    int sum = 0;
    do
    {
    sum+=i;
    i++;
     }while (i<=10);
    printf("The sum of first 10 natural number is %d\n",sum);

    //By for loop
    int sum1 = 0;
    for (int j = 0; j <=10; j++)
    {
        sum1+=j;
    }
    printf("The sum of first 10 natural number is %d\n",sum1);

    return 0;
}