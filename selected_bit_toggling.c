// Problem 4: Bit Toggling
// Question: Toggle the bits at positions 0, 1, and 7 of an 8-bit number.
// Input: uint8_t num = 0x81;
// Expected Output: num = 0x02;
#include<stdio.h>
#define MAX_BITS 8
void main()
{
    unsigned int number=0x81;
    int positions=0;
    printf("ORIGINAL NUMBER = 0x%X\n",number);
    printf("Enter the total number of positions you want to manipulate\n");
    scanf("%d",&positions);
    if(positions>MAX_BITS||positions<0)
    {
        printf("NOT APPLICABLE");
    }
    else
    {
        for(int i=0;i<positions;i++)
        {
            int toggle_bit=0;
            printf("select which bit you want to toggle\n");
            scanf("%d",&toggle_bit);
            number=(number&(~(1<<toggle_bit)));
            printf("0x%X\n",number);
        }
    }

}