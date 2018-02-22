/**
 * even_odd.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/22 PHT
 */

#include <stdio.h>

int isEven(int number)
{
        if (number % 2 == 0)
                return 1;

        return 0;
}

int main()
{
        printf("isEven(1): %d\n", isEven(1));
        printf("isEven(2): %d\n", isEven(2));

        return 0;
}
