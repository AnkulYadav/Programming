//This is the Program to reverse the element of the array
#include<stdio.h>
#define size 10
int main(){
    int i,j,arr[size],temp;
    printf("Enter the element of the array.\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before reversing, the array is :");
    for ( i = 0; i < size; i++)
    {
      printf("%d ",arr[i]);
    }
    for ( i = 0,j=9; i < j; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nAfter reversing ,the array is :");
    for ( i = 0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    

    
    
 
return 0;
}