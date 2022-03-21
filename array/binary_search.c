//this program search an element in the in array through binary search
#include<stdio.h>   //header file 
#define max 30     //define the max size of the array
int binarysearch(int arr[],int item,int n);  //function declarations

int main(){
    int i,n,item,arr[max],index;
    printf("Enter the Size of the array .\n");
    scanf("%d",&n);
    printf("Enter the Elements of the array.(in sorted order) :\n");
    for ( i = 0; i < n; i++)  
    {
        scanf("%d",&arr[i]);    //taking the input 
    }
    printf("Enter the element to be searched :\n");
    scanf("%d",&item);  //taking the item to searched 
    index= binarysearch(arr,n,item);  //function call

    if (index == -1)  //condition for return values 
    {
        printf("%d is not found in the array\n",item);
    }
    else
    {
        printf("%d is found in the array at position : %d ",item,index);
    }
    return 0;
}
//function definition 
int binarysearch(int arr[], int n, int item){
    int low=0,up=n-1,mid;
    while (low<=up)
    {
        mid=(low+up)/2;
        if (arr[mid]==item)
        {
            return mid;
        }
        
        if (item > arr[mid])
        {
            low=mid+1;
        }
        else
        {

        up=mid-1;

        }
    }
    return-1;
}