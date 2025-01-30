#include <stdio.h>

    float average(int , int  , int );
    
    float average(int a, int b , int c){
        return (a+b+c)/3.00 ;
    }

int main(){
    int num1,num2,num3;
    printf("Enter first number : " );
    scanf("%d",&num1);
    
    printf("Enter second number : " );
    scanf("%d",&num2);
    
    printf("Enter third number : ");
    scanf("%d",&num3);

    printf("The average of num1, num2 and num3 is %.2f", average(num1,num2,num3));

    // int x = 2, y =3 , z = 4;
    // printf("%f",average(x,y,z));
    return 0;
}