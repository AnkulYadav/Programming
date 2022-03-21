//this is program that give us a understanding about dynamic memory allocation of memory
#include<stdio.h>
#include<stdlib.h>

int main(){
   int *ptr,n,i;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   ptr=(int *) malloc(n*sizeof(int));
   if (ptr==NULL)
   {
       printf("Momery space is not sufficient\n");
       exit(0);
   }
   for ( i = 0; i < n; i++)
   {
       printf("enter the elements of the array\n");
       scanf("%d",ptr+i);
   }
   for ( i = 0; i < n; i++)
   {
       printf("%d ",*(ptr+i));
   }
   
   
    
 
return 0;
}