/*this is the program that print the pattern given below 
 1  2  3  4  5  6  7 
    1  2  3  4  5
       1  2  3
          1
*/
#include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=4;i++)
    { k=1;
        for(j=1;j<=7;j++){
            if (j>=i && j<=8-i)
            {
                printf(" %d ",k++);
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