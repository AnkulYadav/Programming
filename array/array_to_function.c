//This is the program that pass array elements to a function
#include<stdio.h>
void func(int num);
int main(){
 int arr[10],i;
 printf("Enter the elements of the array.\n");
 for ( i = 0; i < 10; i++)
 {
     scanf("%d",&arr[i]);
     func(arr[i]);
 }
 
return 0;
}
void func(int num){
    if (num%2==0){
        printf("%d is even\n",num);
    }
    else
    {
        printf("%d is odd \n",num);
    }
    
}