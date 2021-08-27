// this is the program that print the following program
//    1   
//   1 2
//  1 2 1
// 1 2 3 2
#include<stdio.h>

int main(){
int i ,j ,a=1, k,f;
for ( i =1; i<=4; i++)
{ k=1;
   a=1;
    for ( j = 1; j <=7; j++)
    {
      
      if (j>=5-i && j<=3+i &&k )
      {
         printf("%d",a);
         j<4?a++:a--;
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