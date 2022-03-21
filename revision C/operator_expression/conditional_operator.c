//this the to understand the conditional operator 
#include<stdio.h>
 
int main(){
    int a, b;
    printf ("Enter two number  and we can find the greater number between them ");
    scanf("%d%d",&a,&b);
    (a>b)? printf("a++ = %d",++a): printf("a-- : %d",--a);
 
return 0;
}