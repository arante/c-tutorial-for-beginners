/**
 * swapping_values.c
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/11 PHT
 */

#include <stdio.h>

int main()
{
        int firstNumber;
        int secondNumber;
        int hold;

        firstNumber = 1;
        secondNumber = 2;
        
        printf("First number: %d, Second number: %d\n", firstNumber, secondNumber);
        
        hold = firstNumber;
        firstNumber = secondNumber;
        secondNumber = hold;

        printf("New first number: %d, New second number: %d\n", firstNumber, secondNumber);

        return 0;
}
