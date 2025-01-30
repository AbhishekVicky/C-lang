#include <stdio.h>

int main()
{
    //By using While Loop
  /*  int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int not_prime = 0;

    if (num == 0 || num == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i =2 ;
        while (i<num)
        {
          if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                i++;
                break;
            }
        }
    }
        if (not_prime)
        {
            printf("This is not a prime number");
        }
        else
        {
            printf("This is a prime number");
        }
    */

   //By using Do-while Loop
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
        int i =2 ;
        while (i<num)
        {
          if (num % i == 0 && num != 2)
            {
                not_prime = 1;
                i++;
                break;
            }
        }
    }
        if (not_prime)
        {
            printf("This is not a prime number");
        }
        else
        {
            printf("This is a prime number");
        }
    
   

    return 0;
}