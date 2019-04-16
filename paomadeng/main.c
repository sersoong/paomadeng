/*
 */

#include <mcs51/8051.h>

#include <stdio.h>

#define uchar unsigned char

void delay()
{
   uchar a,b;
   for(a=255;a;a--)
   {
      for(b=255;b;b--);
   }
}

void main(void)
 {
   // Write your code here
   uchar tmp=1;
   while (1)
   {
        P0=0;
        P0=(~tmp);
        delay();
        tmp<<=1;
        if(tmp==0)
        {
            tmp=1;
        }
   }
 }
