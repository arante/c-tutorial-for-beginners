/**
 * loop.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/20 PHT
 */

#include <stdio.h>

int main()
{
        int scores[10] = {106, 15, 145, 23};
        int scoresLength = 4;
        
        for (int i = 0; i < scoresLength; i++) {
                printf("scores[%d] = %d\n", i, scores[i]);
        }

        return 0;
}
