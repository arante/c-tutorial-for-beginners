#include <stdio.h>

/**
 * multiples.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/03/04 PHT
 */

void getMultiples(int number)
{
        printf("Multiples of %d: ", number);

        for (int i = 2; i < number; i++) {
                if (number % i == 0)
                        printf("%d ", i);
        }

        printf("\n");
}

int main()
{
        getMultiples(12);

        return 0;
}
