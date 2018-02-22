/**
 * parameter_argument.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/22 PHT
 */

#include <stdio.h>

void printLineUp(int arr[], int len)
{
        for (int i = 0; i < len; i++) {
                printf("%d ", arr[i]);
        }

        printf("\n");
}

int main()
{
        int team1[] = {34, 30, 10, 21, 13};
        int team2[] = {0, 23, 35, 11, 23};
        int length = 5;

        printLineUp(team1, length);
        printLineUp(team2, length);

        return 0;
}
