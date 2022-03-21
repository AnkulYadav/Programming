//This is a program that check wether a date is valid or not if dates between 1850 to 2050
#include<stdio.h>
 
int main(){
 int d ,m,y,leap=0,flap=1;
 printf("Enter the date (dd/mm/yyyy) :");
 scanf("%d%d%d",&d,&m,&y);
 if (y%100!=0 && y%4==0 || y%400==0)
 {
     leap=1;
 }
 if (y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31 )
 {
     flap=0;
 }
 else if (m==2)
 {
     if (d==30 ||d==31 || (d==29 && !leap))
     {
         flap=0;
     }
     
 }
 else if (m==4 ||m==6||m==9||m==11)
 {
     if (d==31)
     {
         flap=0;
     }
     
 }
 if (flap==0)
 {
     printf("invalid Date.\n");
 }
 else
 {
     printf("Valid Date.\n");
 }
 
 
 
 
return 0;
}