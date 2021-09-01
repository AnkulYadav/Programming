// this is the program that access the elements of the a array
#include<stdio.h>
 
int main(){
    int i;
    int arr[5];
    printf("Enter the elements of the array.\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
 
return 0;
}