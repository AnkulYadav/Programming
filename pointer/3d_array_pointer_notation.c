//program to print the element of 3D array using pointer notations
#include<stdio.h>
 
int main(){
 int arr[2][3][2]={1,12,13,14,2,3,4,5,6,7,123,1234,12345};
 int i,j,k;
 for ( i = 0; i < 2; i++)
 {
     for ( j = 0; j < 3; j++)
     {
         for ( k = 0; k < 2; k++)
         {
             printf("%d\t",*(*(*(arr+i)+j)+k));
         }
         printf("\n");
     }
     
 }
 
return 0;
}