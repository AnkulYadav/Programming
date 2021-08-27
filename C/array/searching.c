//this is a program that apply selection sort 
// 
#include<stdio.h>

int main(){
int arr[]={1,3,2,4,1};
int ele=1;
int j=0;
int found=0;
for (int  i = 0; i <=4; i++)
{
    if (arr[i]==ele)
    {
        printf("the value is find at %d\n ",i);
        ++j;
        found=1;
        
    }
    
}
printf("no_of it occur in the array is %d\n",j);
 if (!found)
    {
        printf("the array has not this value .\n");
    }
return 0;
}