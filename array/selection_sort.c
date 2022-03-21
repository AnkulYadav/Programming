//this is the program that sort the given array in the asceding order with the help of the selecton sort
#include<stdio.h>
#define max 50
int main(){
    int i,j,n,temp,min,arr[max];
    printf("Enter the number of elemnts :\n");
    scanf("%d",&n);
    printf("Enter the elements of the array.\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
         min=i;
         for ( j=i+1 ; j < n; j++)
         {
             if(arr[min]>arr[j])
             min=j;
         }
         if (i!=min)
         {
             temp=arr[i];
             arr[i]=arr[min];
             arr[min]=temp;
         }
         
         
    }
    printf("Sorted list is :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    
    return 0;
}