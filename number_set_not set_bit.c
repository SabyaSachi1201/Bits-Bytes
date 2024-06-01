// Problem 10: Counting Set Bits
// Question: Write a function to count the number of set bits (1s) in an 8-bit number.
// Input: num = 0x3F;
// Expected Output: 6

#include<stdio.h>
#define MAX_BITS 8
void main()
{
    unsigned int input = 0x3F;
    int set_number=0; //we are gonna store the number of high bits inside this variable.
    int notset_number=0; //we are gonna store the number of low bits inside this variable.
    for(int i =0;i<MAX_BITS;i++)
    {
        unsigned int mask = (1<<i); //with each iteration, it becomes 1,10,100...
        if(((input&mask)>>i)==1)
        {
            set_number++;
        }
        else if(((input&mask)>>i)==0)
        {
            notset_number++;
        }
    }
    printf("NUMBER OF SET BITS = %d, NUMBER OF NON-SET BITS = %d",set_number,notset_number);
}