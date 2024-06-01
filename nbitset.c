// Problem 2: Bit Setting
// Question: Write a function to set the nth bit of a given 8-bit number.
// Input: (num = 0x45, n = 3)
// Expected Output: num = 0x4D;
#include<stdio.h>
#include<stdint.h>

#define MAX_BITS 8

int main()
{
    unsigned int input=0x45; //8bit number
    int nth=0;
    unsigned int temporary2=0;
    unsigned int temporary=0;
    printf("OUTPUT = 0x%X \n",input);
    printf("Enter bit number to set the bit \n");
    scanf("%d",&nth);
    if(nth>MAX_BITS)
    {
        printf("NOT APPLICABLE");
    }
    else
    {
        temporary=(1<<nth); //store the value in a temporary variable 'temporary'. Helps with traversal.
        temporary2=temporary;
        temporary = ((temporary & input)>>nth); //here we are extracting the particular bit which we want to set.
        if(temporary == 0 )
        {
            input = (input|temporary2);
            temporary2=0;
        }
        else if(temporary==1)
        {
            printf("%d th bit is already set",nth);
        }
        printf("OUTPUT = 0x%X",input);
    }
}