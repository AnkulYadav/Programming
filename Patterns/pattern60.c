//
#include<stdio.h>
 
int main(){
 int i,j,n,k,num,mid;
 printf("Enter the number\n");
 scanf("%d",&n);
 k=2*n-1;
 mid=(k+1)/2;
 num=n;
 for ( i = 1; i <=k; i++)
 {   
     for ( j = 1; j <=k; j++)
     {
         if (j>=i && j<=(k+1)-i)
         {
             printf("%d ",n);
         }
         else if (j>=(k+1)-i && j<=i)
         {
             printf("%d ",n);
         }
         else if (j<=i-1)
         {
             printf("%d ",(num+1)-j);
         }
        else 
         {
             printf("%d ",j-(num-1));
         } 
     }
     printf("\n");
     if (i<mid)
     {
         n--;
     }
     else
     {
        ++n;
     }
 }
return 0;
}