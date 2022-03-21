//this program print the number of days in any given month(1-12)
//Author :Ankul
#include<stdio.h>


int main(){
int m;
scanf("%d",&m);

    if (m==1)
{
    printf("31");
}
if (m==3)
{
    printf("31");
}
if (m==5)
{
    printf("31");
}
if (m==7)
{
    printf("31");
}
if (m==8)
{
    printf("31");
}
if (m==10)
{
    printf("31");
}
if (m==12)
{
    printf("31");
}
 
if (m>12)
{
    printf("-1");
}
if (m==2){
    printf("28");
}
if(m==6){
    printf("30");
}

if(m==4){
    printf("30");
}

if(m==9){
    printf("30");
}
if(m==11){
    printf("30");
}


return 0;
}