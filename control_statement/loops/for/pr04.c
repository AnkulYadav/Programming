//to print the fibbonacci series
#include<stdio.h>

int main(){
    int n,i,term=1,sum,z=0;
    printf("Enter the number of term\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=term+z;
        printf("%d\t",sum);
        term=z;
        z=sum;
    }
    return 0;
}