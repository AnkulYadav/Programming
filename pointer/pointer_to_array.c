//this is a program that show the relationship between the  pointer and array
//program to print the value and address of the elements of an array and it prove that the array stored it's elements in the consecutive memory location
#include<stdio.h>
 
int main(){
    int i,arr[5]={1,2,3,4,5};
    for ( i = 0; i < 5; i++)
    {
        printf("Value of arr[%d]=%d\nAddress of arr[%d]=%d\nelement through pointers=%d\nElement through general notations=%d\n",i,arr[i],i,&arr[i],*arr+i,arr[i]);
        printf("hence arr[%d]=%d  ==*arr+%d=%d\n",i,arr[i],i,*arr+i);
    }
    
return 0;
}