//Program to print the values and address of elements of a 2D array using pointer array
#include<stdio.h>
 
int main(){
    int arr [3][4]={1,2,3,4,5,6,7,8,9,10,11,12},i,j;
    printf("enter the element of the 2d array\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        
    }
    
 
return 0;
}