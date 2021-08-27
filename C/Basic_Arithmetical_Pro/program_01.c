// find the gross salary of a person 
//Date :-18/03/2021
//Author :-Ankul Yadav
#include<stdio.h>

int main(){
    int bs, gs , hra, da ;
    printf("Enter the value of basic salary \n ");
    scanf("%d",&bs);
    hra=bs*40/100;
    da=bs *20/100;
    gs = bs +hra+da;
    printf("the value of gross salary is %d \n",gs );
return 0;
}