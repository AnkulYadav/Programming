/*
          1
       1  2  3
    1  2  3  4  5
 1  2  3  4  5  6  7
*/
#include<stdio.h>

int main(){
    int a=1;
    for (int i = 1; i <=4; i++)
    { a=1;
        for (int j = 1; j <= 7; j++)
        {
            
            
            
            if (j>=5-i && j<=3+i)
            {
                printf(" %d ",a);
                a++; 
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