/*
 */

#include <mcs51/8051.h>

#include <stdio.h>

#define uchar unsigned char

void delay(int i)
{
   while(i--);
}

void main(void)
 {
   while (1)
   {
        P0_0 = 0;
        P0_1 = 1;
        P0_2 = 0;
        P0_3 = 1;
        P0_4 = 0;
        P0_5 = 1;
        P0_6 = 0;
        P0_7 = 1;
        delay(50000);
        P0_0 = 1;
        P0_1 = 0;
        P0_2 = 1;
        P0_3 = 0;
        P0_4 = 1;
        P0_5 = 0;
        P0_6 = 1;
        P0_7 = 0;
        delay(50000);
   }
 }
