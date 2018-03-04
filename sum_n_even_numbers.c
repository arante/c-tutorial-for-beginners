#include <stdio.h>

/**
 * sum_n_even_numbers.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/03/04 PHT
 */

int sumOfEvenNumbers(int number)
{
        int sum = 0;
        for (int i = 0; i <= number; i++) {
                if (i % 2 == 0)
                        sum = sum + i;
        }

        return sum;
}

int main()
{
        printf("sumOfEvenNumbers(5): %d\n", sumOfEvenNumbers(5));
        printf("sumOfEvenNumbers(10): %d\n", sumOfEvenNumbers(10));
        printf("sumOfEvenNumbers(15): %d\n", sumOfEvenNumbers(15));

        return 0;
}
