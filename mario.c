#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int steps;
    do
    {
        steps = get_int("Enter the number of steps: ");
    }
    while (steps < 1 || steps > 8);

    for (int i = 1; i <= steps; ++i)
    {
        for (int j = i; j < steps; ++j)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; ++k)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
