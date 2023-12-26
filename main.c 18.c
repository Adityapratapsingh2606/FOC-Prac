/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int c, n, f=1;
    printf("enter a number to calculate its factorial\n");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    f=f*c;
    printf("factorial of %d = %d\n",n,f);
    return 0;
}
