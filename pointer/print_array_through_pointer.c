//this is a program that print a pointer array using pointer 
#include<stdio.h>
 
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr [10]={11,12,13,14,15,16,17,18,19,20};
    for (int i = 0; i < 10; i++)
    {
        printf("(%d ",arr[i]);
        printf("%d ",*(arr+i));
        printf("%d),\n",*(ptr+i));
    }

    // pointer array 
    int *ptr1[10];
    printf("enter the element of the array\n");
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d",ptr1+i);
        printf("%d ",*(ptr1+i));
    }

    
    
 
return 0;
}