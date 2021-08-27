// this is program that print the pattern given below
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<stdio.h>

int main(){
int i ,j ,a=1;
for ( i = 0; i <=3; i++)
{ 
   
    for ( j = 0; j <=3; j++)
    { 
        if (i>=j)
        {
            printf("%d\t",a);
          a++;
        }
     
    }
     printf("\n"); 
     
}

return 0;
}    