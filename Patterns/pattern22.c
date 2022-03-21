/*
          1
       2  2  2       
    3  3  3  3  3    
 4  4  4  4  4  4  4 
*/
#include<stdio.h>

int main(){
    int a;
    for (int i = 1; i <=4; i++)
    { a=1;
        for (int j = 1; j <= 7; j++)
        {
            
            
            
            if (j>=5-i && j<=3+i)
            {
                printf(" %d ",i);
                
            }
            else
            {
                printf("   ");
            
            }
            
        }
        printf("\n");
    }
    
    return 0;

}