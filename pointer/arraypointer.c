//program to understand difference between pointer to an integer and pointer to an array of integers
#include<stdio.h>
 
int main(){
    int *p;
    int (*ptr)[5];
    int arr[5]={3,4,5,6,1};
    p=arr;
    ptr=&arr;
    printf("p=%u,ptr=%u\n",p,ptr);
    p++;
    ptr++;
    printf("p=%u,ptr=%u\n",p,ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr+i);
        printf("%d\n",*(arr+i));
    }
    
 
return 0;
}