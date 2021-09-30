#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int collatz(int n);

int main(void)
{

    int n = get_int("whats n? \n");

    int steps = collatz(n);

    printf("It will take %i steps \n", steps);

}

int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0) // check if is a even number
    {
        return 1 + collatz(n / 2);
    }
    else // odd numbers
    {
        return 1 + collatz(3 * n + 1);
    }
}
