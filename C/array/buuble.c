// 
#include<stdio.h>

int main(){
int arr[]={44,33,55,22,11};
int i,temp;
for ( i = 0; i <=3; i++)
{ 
    for(int j=i+1;j<=4;j++)
    {
        if (arr[i]>arr[j])
           {
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
             
            }
        i++; 
    }
    i=0;
}
 for (i=0; i<=4;i++)
{
    printf("%d\t",arr[i]);
}

return 0;
}