// Problem 5: Bit Checking
// Question: Write a function to check if the nth bit of a given 8-bit number is set.
// Input: (num = 0x34, n = 5)
// Expected Output: True (since the 5th bit is set)

#include<stdio.h>
#define MAX_BITS 8
void main()
{
    unsigned int input = 0x34;
    int bit_number=0;
    printf("Enter the bit position which you wanna check\n");
    scanf("%d",&bit_number);
    if(bit_number>MAX_BITS || bit_number<0)
    {
        printf("INVALID");
    }
    else
    {
        int mask=(1<<bit_number);
        if((mask&input)>>bit_number == 0)
        {
            printf("FALSE");
        }
        else if((mask&input)>>bit_number == 1)
        {
            printf("TRUE");
        }
    }
}