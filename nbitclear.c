/*
Problem 3: Bit Clearing
Question: Write a function to clear the nth bit of a given 8-bit number.
Input: (num = 0x4F, n = 1)
Expected Output: num = 0x4D;
*/

#include<stdio.h>
#define MAX_BITS 8
void main()
{
    unsigned int input=0x4F; 
     int nth=0;
    printf("OUTPUT = 0x%X \n",input);
    printf("Enter bit number to set the bit \n");
    scanf("%d",&nth);
    if(nth>MAX_BITS || nth<0)
    {
        printf("NOT APPLICABLE");
    }
    else
    {
        unsigned int temporary=(1<<nth);
        if(((input&temporary)>>nth)==1)
        {
            input=(input&(~temporary));
            printf("FINAL RESULT = 0x%X",input);
        }
        else if(((input&temporary)>>nth)==0)
        {
            printf("BIT IS ALREADY CLEARED");
        }

    }
}