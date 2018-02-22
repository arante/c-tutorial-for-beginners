/**
 * do_while.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/22 PHT
 */

#include <stdio.h>

int main()
{
        //int scores[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        //int scoresLength = 9;

        int scores[] = {};
        int scoresLength = 0;

        int i = 0;
        do {
                printf("%d\n", scores[i]);
                i = i + 1;
        } while (i < scoresLength);

        return 0;
}
