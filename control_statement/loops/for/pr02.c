//multiply two number without using *operator
#include<stdio.h>

int main(){
    int a,b,mul=0;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    for ( int i = 1; i <=b; i++)
    {
        mul=mul+a;
    }
    printf("%d\n",mul);
    return 0;
}