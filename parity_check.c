/*
Problem 8: Parity Check
Question: Write a function to check if an 8-bit number has even parity.
Input: num = 0x5B;
Expected Output: False (since there is an odd number of 1s)
*/

#include<stdio.h>
#define MAX_BITS 8
void main()
{
    unsigned int input = 0x5B;
    unsigned int mask=0;
    int count=0;
   for(int i=0;i<MAX_BITS;i++)
   {
       mask = (1<<i);
       if((mask&input)>>i==1)
       {
           count++;
       }
   }
   if(count%2==0)
   {
       printf("EVEN PARITY");
   }
   else if(count%2!=0)
   {
       printf("ODD PARITY");
   }
}