/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=4;i++)
  {
      for(j=4;j>=i;j--)
  {
      printf("x");
  }
  printf("\n");
  }
}