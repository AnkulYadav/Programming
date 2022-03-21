//program to access the array using pointer
#include<stdio.h>
 
int main(){
    int arr[5]={12,32,34,43,45},*ptr=arr,i;
    for ( i = 0; i < 5; i++)
    {
        printf("Address of arr[%d]=%u",i,*(ptr+i));
        printf("\t Value at arr[%d]=%u\n",i,ptr+i);
    }
    
 
return 0;
}