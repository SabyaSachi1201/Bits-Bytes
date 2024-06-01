//Determine If Bits Need to be Flipped: Write a function to count the number of bits needed to be flipped to convert one number to another.//
#include<stdio.h>
#define MAX_BITS 8 
void main()
{
    unsigned int number1,number2;
    printf("Enter the first hexadecimal number\n");
    scanf("%02x",&number1);
    printf("Enter the second hexadecimal number\n");
    scanf("%02x",&number2);
    printf("The 2 numbers are %u and %u\n",number1,number2);
    for(int i=0;i<MAX_BITS;i++)
    {
        int mask = (1<<i);
        if(((number1&mask)>>i)!=((number2&mask)>>i))
        {
            printf("Toggle Bit at Position %d to change number\n",i);
            if(((number1&mask)>>i)==1)
            {
                number1&=(~mask);
            }
            else if(((number1&mask)>>i)==0)
            {
                 number1|=(mask);
            }
         }
    }
        printf("\nThe 2 numbers are %u and %u",number1,number2); 
}