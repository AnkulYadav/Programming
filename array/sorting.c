// 
#include<stdio.h>

int main(){
int arr[]={12,124,454,51,14,11};
int i=0,temp;
for ( i = 0; i <=4; i++)
{
  for(int j=i+1;j<=5;j++)
{
    if (arr[i]>arr[j])
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    } 
}
}
 for (i=0; i<=5;i++)
{
    printf("%d\t",arr[i]);
}

return 0;
}