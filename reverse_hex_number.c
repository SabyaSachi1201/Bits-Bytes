//Problem statement : Extract all bytes from 4 byte hex number and reverse.
// step -1 : Extracting individual bytes from the hex number.
// step -2 : Reverse order and append all bytes 

#include<stdio.h>
#include<stdint.h>
#define NUMBER_OF_BYTES 4
void main()
{
    unsigned int hexvalue=0xFF4F7FCF;
    unsigned int newvalue=0;
    unsigned int array[10];
    int k=0;
    printf("MY NUMBER IS %X",hexvalue);
	//STEP-1
    for(int i=NUMBER_OF_BYTES-1;i>=0;i--) //this part of the code is responsible for extracting individual bytes and storing in array by BIT-MASKING
    {
        array[k]=(hexvalue>>(i*8)&0xFF); //
        k++;
    }
        printf("\n");
    printf("MY ARRAY IS : ");
    for(int j=0;j<4;j++)
    {
        printf("%X",array[j]);
    }
    printf("\n");
	//STEP - 2
    for(int p=NUMBER_OF_BYTES-1;p>=0;p--) //reversing the number by starting from the last position inside the array.
    {
        newvalue=(newvalue<<8)|array[p];
    }
        printf("MY REVERSED NUMBER IS %X",newvalue);

}


//OUTPUT
/*MY NUMBER IS FF4F7FCF
MY ARRAY IS : FF4F7FCF
MY REVERSED NUMBER IS CF7F4FFF
*/