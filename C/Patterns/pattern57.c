// this is the program that print the following pattern

//    1   
//   2 3
//  4 5 6
// 7 8 9 10
#include<stdio.h>

int main(){
int i ,j ,a=1, k;
for ( i =1; i<=4; i++)
{ k=1;
    for ( j = 1; j <=7; j++)
    {
      if (j>=5-i && j<=3+i && k)
      { 

         printf("%d",a);
         a++;
        k=0;
      }
     else
     {
         printf(" ");
         k=1;
     }
      
    }
    printf("\n");
    
}

return 0;
}