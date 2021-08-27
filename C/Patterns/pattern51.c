// this program will print the following pattern
// */*/*/*
// /*/*/*/
// */*/*/*
// /*/*/*/
// */*/*/*
#include<stdio.h>
 
int  main(){
    int a=1;
    for (int i = 1; i <6; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            if (a==1)
            {
                printf("*");
                a--;
            }
            else
            {
                printf("/");
                a++;
            }
            
        }
        printf("\n");
    }
    
 
return 0;
}