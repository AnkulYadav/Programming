//this is a program that check enterd date is valid or not if 1850 to 2050
#include<stdio.h>
 
int main(){
    int dd,mm,yyyy;
    printf("Enter the date.\n");
    scanf("%d  %d %d",&dd,&mm,&yyyy);
    if ((dd>=1 || dd<=31) &&(mm>=1 ||mm<=12) &&(yyyy>=1850||yyyy<=2050))
    {
        
        
    }
    
    printf("%d %d %d",dd,mm,yyyy);

return 0;
}