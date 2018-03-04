#include <stdio.h>

/**
 * sum_n_numbers.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/03/04 PHT
 */

int sumOfNumbers(int number)
{
        int sum = 0;
        for (int i = 1; i <= number; i++) {
                sum = sum + i;
        }

        return sum;
}

int main()
{
        printf("Sum up to 5: %d\n", sumOfNumbers(5));
        printf("Sum up to 55: %d\n", sumOfNumbers(55));

        return 0;
}
