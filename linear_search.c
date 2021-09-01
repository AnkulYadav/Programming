//this is the program that linear search in the array
#include<stdio.h>
#define max 50
int linearsearch(int arr[],int n, int item);

int main(){
    int i,n,item, arr[max],index;
    printf("Enter the Number Elements of the array.\n");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d",&item);
    index=linearsearch(arr,n,item);
    if (index==-1)
    {
        printf("%d is not found in the array.\n",item);
    }
    else
    {
        printf("%d found at position %d\n",item,index+1);
    }
    
    return 0;
}
int linearsearch(int arr[],int n,int item){
    int i=0;
    while ( item != arr[i]){
      i++;}
    if (i<n)
    {
        return i;
    }
    else
    {
        return-1;
    }
}