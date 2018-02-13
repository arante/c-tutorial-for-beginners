/**
 * cricket_switch.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/05/14 PHT
 */

#include <stdio.h>

int main()
{
        int run = 3;

        switch (run) {
                case 1:
                        printf("Single\n");
                        break;
                case 2:
                        printf("Double\n");
                        break;
                case 3:
                        printf("Triple\n");
                        break;
                case 4:
                        printf("Boundary\n");
                        break;
                case 6:
                        printf("Sixer\n");
                        break;
                default:
                        printf("Penalty Run\n");
                        break;
        }

        return 0;
}
