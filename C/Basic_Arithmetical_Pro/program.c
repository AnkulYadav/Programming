//Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
// this is proggram that print gross salary of a employee of any orginsation with 40% DA & 20% HRA
#include<stdio.h>


int main(){
    int bs; //bs-basic salary
    float da, hra ,gs;  //here da=dearness allowance hra=house rent allowance gs=gross salary
    printf("enter the basic salary of the employee\n");
    scanf("%d",&bs);
    hra=bs/5;
    da=bs/5*2;
    gs=bs+da+hra;
    printf("the gross salary of the employee is %f",gs);

return 0;
}           