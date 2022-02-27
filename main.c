#include <stdio.h>
#include <stdlib.h>



int main()
{
    unsigned char R3;
    signed char R4;

    printf("Please input R4 signed hex = \n");
    scanf("%x",&R4);
    printf("R4 = %d\n\n",R4);
    printf("Please input R3 unsigned hex = \n");
    scanf("%x",&R3);
    printf("R3 = %d\n\n",R3);



    R3 = R3 - R4;
    printf("R3 = R3 - R4\n%d\n\n",R3);

    if((R3 & 1 )== 1) // Odd even checker
    {
        printf("Odd number\n");
    }
    else
    {
        printf("Even number\n");
    }
    if((R3 & 0x20) == 0x20) //if H is set
    {
        printf("H is Set\n");
    }

    else
    {
        printf("H is Clear\n");
    }
    if((R3 & 0x10) == 0x0) //if S is clear
    {
        printf("S is Clear\n");
    }
    else
    {
        printf("S is Set\n");
    }
    if((R3 & 0x8) == 0x8) //if V is set
    {
        printf("V is Set\n");
    }
    else
    {
        printf("V is Clear\n");
    }
    if((R3 & 0x4) == 0x0)
    {
        printf("N is Clear\n");
    }
    else
    {
        printf("N is Set\n");
    }
    if((R3 & 0x2) == 0x2)
    {
        printf("Z is Set\n");
    }
    else
    {
        printf("Z is Clear\n");
    }
    if((R3 & 0x1) == 0x1)
    {
        printf("C is Set\n");
    }
    else
    {
        printf("C is Clear\n");
    }
    R3 = ((R3 | 0x80)& 0xbf);
    printf("Set the I flag (bit 7 to 1) and clear the T flag (bit 6 to 0) of R3\n%d\n",R3);


    return 0;
}
