/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
int i,fact=1,number;
printf("enter a number");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
fact=fact*i;
}
printf("factorial of %d is:%d",number,fact);
}