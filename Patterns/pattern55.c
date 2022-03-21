// this is a program that print the following pattern 
// A 
// B A 
// A B A 
// B A B A
// A B A B A

#include<stdio.h>

int main(){
    int i, j;
    char a='A';
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {  
         
          if(i>=j )
          
          {
              printf("%c\t", a);
            if (a=='A')
            {
                a++;
            }
          else{
              a--;
          }  
          }
          
        }
        
         printf("\n");
     }
   

return 0;
}