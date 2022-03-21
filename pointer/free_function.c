// this is a program to vanish the memory after it dynamically allocated 
#include<stdio.h>
#include<stdlib.h>
int *input()
{
    int *ptr,i;
    ptr=(int *)malloc(5*sizeof(int));
    printf("enter the 5 element to that you want sum of\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",ptr+i);
    }
    return ptr;
}

int main(){
    int i,sum=0;
    int *ptr=input();
    for ( i = 0; i < 5; i++)
    {
        sum+=*(ptr+i);
    }
    printf("the sum of the 5 no is : %d",sum);
    free(ptr);
    ptr=NULL;
    return 0;
    
}