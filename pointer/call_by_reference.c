//Call by reference
#include<stdio.h>
void ref(int *a,int *b){
    (*a)++;
    (*b)++;
    printf("a=%d,b=%d\n",*a,*b);
}
int main(){
    int a=5,b=6;
    printf("a=%d,b=%d\n",a,b);
    ref(&a,&b);
    printf("a=%d,b=%d\n",a,b);
 
return 0;
}