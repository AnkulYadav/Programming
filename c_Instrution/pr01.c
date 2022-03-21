//If   a   five-digit   number   is   input   through   the   keyboard,   write   a program  to  calculate  the  sum  of  its  digits.
//for example:1+2+3+1+3=10 
#include<stdio.h>


int main(){
    int num,rem=0,sum=0;

    printf("Enter the number,\n");
    scanf("%d",&num);
    for(;num!=0;)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
           
        }
       printf("sum:%d",sum);  
    
return 0;
}