//This is the program that print the number of element even and odd element in the array or count the even and odd in array
#include<stdio.h>
 
int main(){
    int i,arr[5],even_count=0,odd_count=0;
    printf("Enter the elements of the array.\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (arr[i]%2==0)
        {
            ++even_count;
        }
        else
        {
            ++odd_count;
        }
        
        
    }
    printf("Even=%d and Odd=%d",even_count,odd_count);
    
 
return 0;
}