/**
 * array.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/20 PHT
 */

#include <stdio.h>

int main()
{
        int scores[10] = {106, 15, 145, 23};

        // Read values
        printf("scores[0] = %d\n", scores[0]);
        printf("scores[2] = %d\n", scores[2]);

        // Set values
        scores[1] = 255;
        printf("scores[1] = %d\n", scores[1]);

        // Find length of array
        int scoresLength = 4;

        // Default value
        printf("Default value of scores[4] = %d\n", scores[4]);

        // Bite more than you can chew
        printf("%d\n", scores[11]);

        return 0;
}
