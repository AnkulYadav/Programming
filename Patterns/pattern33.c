/*this is the program that print the pattern given below 
 5  6  7  8  9  8  7  6  5 
    4  5  6  7  6  5  4
       3  4  5  4  3
          2  3  2
             1
*/
#include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    { k=6-i;
        for(j=1;j<=9;j++){
            if (j>=i && j<=10-i)
            {
                printf(" %d ",k);
                (j<5)? ++k:--k;
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