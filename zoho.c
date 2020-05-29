/*
P      M 
 R    A  
  O  R   
   G    
  O  R   
 R    A  
P      M 
*/
#include<stdio.h>
int main()
{
  char x[]="PROGRAM";
  int i,j;
  for(i=0;i<7;i++)
  {
    for(j=0;j<7;j++)
    {
       if (i==j)
        printf("%c ",x[j]);
       else if (i+j==6)
        printf("%c ",x[j]);
       else
        printf(" ");
    }
    printf("\n");
  }
}

