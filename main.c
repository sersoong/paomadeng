/* Main.c file generated by New Project wizard
 *
 * Created:   ?? 4? 12 2019
 * Processor: 80C52
 * Compiler:  Keil for 8051
 */

#include <reg51.h>
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
   uchar tmp=0x01;
	 P0=85;
   while (1)
   {
		 delay();
		 if(P0==85)
		 {
			 P0=170;
		 }
		 else
		 {
			 P0=85;
		 }
     //P0=(~tmp);
//			P2=(~tmp);
      //delay();
      //tmp<<=1;
      //if(tmp==0)
      //{
			//	tmp=1;
      //}
   }
 }
