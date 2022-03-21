//this is the function that understand the realloc function ()
#include<stdio.h>
#include<stdlib.h>

int main(){
int i,*ptr,n,newsize;
printf("enter the size of the array.\n");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int ));
if (ptr==NULL)
{
    printf("insufficient memory !!!!....");
    exit(0);
}
for ( i = 0; i < n; i++)
{
    scanf("%d",ptr+i);
}
printf("Enter the newsize of the array\n");
scanf("%d",&newsize);
ptr=(int *)realloc(ptr,newsize*sizeof(int));
if (ptr==NULL)
{
    printf("memory space is not availble\n");
    exit(0);
}
for ( i = n; i < newsize; i++)
{
    *(ptr+i)=i*10;
}
for ( i = 0; i <newsize; i++)
{
    printf("%d ",*(ptr+i));
}




 
return 0;
}