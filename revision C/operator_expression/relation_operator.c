//this is the program to understand the use of relational operators
// or this the program to find greater number among three numbers
#include<stdio.h>
 
int main(){
    int a, b,c;
    printf("Enter three number the you want to compare !!!!!!!");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b && a > c)
    {
        printf("A is the greatest the is %d",a);
    }
    else if (b > a && b > c )
    {
        printf("%d is the greatest number",b);
    }
    else{
        printf("%d is the greatest number is : ",c);
    }
    
    

 
return 0;
}