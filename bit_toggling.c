// Problem 4: Bit Toggling
// Question: Toggle the bits at positions 0, 1, and 7 of an 8-bit number.
// Input: uint8_t num = 0x81;
// Expected Output: num = 0x02;
#include<stdio.h>
#define MAX_BYTES 8
void main()
{
    unsigned int input = 0x81;
    int no_bits;
    printf("Enter Number of Bits\n");
    scanf("%d",&no_bits);
    if(no_bits>MAX_BYTES || no_bits<0)
    {
        printf("Not Applicable\n");
    }
    else 
    {   for(int i=0;i<no_bits;i++)
        {   
            int bit_number=0;
            printf("Enter the bit position you wanna modify\n");
            scanf("%d",&bit_number);
            unsigned int mask=(1<<bit_number);
            if((input&mask)>>bit_number==0)
            {
                input=(input|mask);
            }
            else if((input&mask)>>bit_number==1)
            {
                input=(input&(~mask));
            }

        }
    
    }
    printf("0x%X",input);
}

