#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int not_prime = 0;

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
        if (not_prime)
        {
            printf("This is not a not prime number");
        }
        else
        {
            printf("This is a prime number");
        }
    

    return 0;
}