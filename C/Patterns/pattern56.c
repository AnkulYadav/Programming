//this is a program to print the following pattern


// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A


#include<stdio.h>

int main(){int i,j;
char a='A';
for ( i = 1; i <= 7; i++)
{ a='A';
    for (j = 1; j <=13; j++)
    { 
        if (j<=8-i || j>=6+i)
        {
          printf("%c",a);
          j<7? a++:a--;  
        }
       else
       {
           printf(" ");
           if (j==7)
           a--;
       } 
        
    }
   printf("\n"); 
}


return 0;
}