//This is the Program that add elements of the array 
#include <stdio.h>
#define max 20
int main(){
    int i, arr[max],n,sum=0;
    printf("Enter the size of the array.\n");
    scanf("%d",&n);
    printf("|Enter the elements of the array.|\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
        
    }
    printf("The sum of elements is %d",sum);
    
    return 0;
}