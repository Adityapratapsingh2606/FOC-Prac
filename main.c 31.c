/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int x,y,z;
    printf("enter the number");
    scanf("%d %d %d", &x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
            printf("x");
        }
        else
        {
            printf("z");
        }
    }
    
}