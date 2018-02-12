/**
 * cricket.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/12 PHT
 */

#include <stdio.h>

int main()
{
        int run;

        run = 5;

        if (run == 1)
                printf("Single\n");
        else if (run == 2)
                printf("Double\n");
        else if (run == 3)
                printf("Triple\n");
        else if (run == 4)
                printf("Boundary\n");
        else if (run == 6)
                printf("Sixer\n");
        else
                printf("Penalty Run\n");

        return 0;
}
