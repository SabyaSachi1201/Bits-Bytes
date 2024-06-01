// Question: Given a register value, clear the bits at positions 2, 3, and 5.
// uint8_t reg = 0xAF; op= 0x83;
#include <stdio.h>

int main() 
{
    unsigned int reg = 0xAF;  //Considering 2 byte number
    unsigned int bitmask=0xFF;
    unsigned int finalvalue=0;
    printf("0x%X is the  value before BITMASKIN\n",reg);
    int number_of_positions;
    printf("Enter Number of Positions you want to Mask");
    scanf("%d",&number_of_positions);
    for(int i=0;i<number_of_positions;i++)
    {
        int bit_number=0;
        printf("\nEnter position you want to mask");
        scanf("%d",&bit_number);
        bitmask=(bitmask&(~(1<<bit_number)));
        finalvalue=(reg&bitmask);
        printf("0x%X",finalvalue);
    }
    printf("\n0x%X is the final value after BITMASKIN",finalvalue);
    
}