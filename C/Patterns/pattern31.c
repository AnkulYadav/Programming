/*this is the program that print the pattern given below 
 4  4  4  4  4  4  4
    3  3  3  3  3
       2  2  2
          1
*/
#include<stdio.h>

int main(){
    int i,j,k=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++){
            if (j>=i && j<=8-i)
            {
                printf(" %d ",k);
            }
            else
            {
                printf("   ");
            }  
        }
        printf("\n");
        k--;
    }

    return 0;
}