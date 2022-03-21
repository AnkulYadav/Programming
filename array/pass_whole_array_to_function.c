//this is the program where we pass the whole array to a function
#include<stdio.h>
void func(int arr[]);
int main(){
    int i, arr[6]={1,2,3,4,5,6};
    func(arr);
    printf("Concepts of array are :");
    for ( i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
 
return 0;
}

void func(int arr[]){
    int sum=0,i;
    for ( i = 0; i < 6; i++)
    {
        arr[i]=arr[i]*arr[i];
        sum+=arr[i];
    }
    printf("Sum of square=%d\n",sum);
}