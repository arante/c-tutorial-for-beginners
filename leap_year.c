#include <stdio.h>

/**
 * leap_year.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/03/04 PHT
 */

int leapYear(int year)
{
        if (year % 400 == 0)
                return 1;
        if (year % 100 == 0)
                return 0;
        if (year % 4 == 0)
                return 1;
        return 0;
}

int main()
{
        printf("2000: %d\n", leapYear(2000));
        printf("2001: %d\n", leapYear(2001));
        printf("2003: %d\n", leapYear(2003));
        printf("2004: %d\n", leapYear(2004));

        return 0;
}
