/*
          1
       2  2  2       
    3  3  3  3  3    
 4  4  4  4  4  4  4 
*/
#include<stdio.h>
long factorial(int );
long comb(int ,int );

int main(){
    int a,k;
    for (int i = 1; i <=5; i++)
    { a=1;
        for (int j = 1; j <= 9; j++)
        {
            if (j>=6-i && j<=4+i && a)
            {
                printf(" %ld ",j);
                a=0;

                
            }
            else
            {
                printf("   ");
                a=1;
            }
            
        }
        printf("\n");
    }
    
    return 0;
}

long comb(int n,int r){
long c;
c=factorial(n)/(factorial(r)*factorial(n-r));
return c;    
}

long factorial( int n){
    int i;
    long int fact=1;
    if(n==0)
    return 1;
    for ( i = n; i > 1; i--)
    {
        fact*=i;
    }
    return fact;
}