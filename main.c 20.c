/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("ASCII value of character %c = %d\n",i,i);
    }
    return 0;
}
