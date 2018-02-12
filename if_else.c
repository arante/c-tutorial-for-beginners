/**
 * if_else.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/12 PHT
 */

#include <stdio.h>

int main()
{
        int age;

        age = 2018 - 1986;

        if (age >= 18)
                printf("%d is of full age.\n", age);
        else
                printf("%d is not of full age.\n", age);

        return 0;
}
