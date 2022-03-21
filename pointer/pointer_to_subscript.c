//program to print the value of array elements using pointer and subscript notation.
#include<stdio.h>
 
int main(){
    int arr[5]={45,34,23,12,43},i=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Value of arr[%d]=",i);
        printf("%d\t",arr[i]);
        printf("%d\t",*(arr+i));
        printf("%d\t",*(i+arr));
        printf("%d\n",i[arr]);
        printf("Address of arr[%d]=%u\n",i,&arr[i]);
    }
    
 
return 0;
}