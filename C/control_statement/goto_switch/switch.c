//perform arithmetic equation using switch
#include<stdio.h>
 
int main(){
   int a,c;
   char b;
   printf("Enter the arithmetic operator\n");
   scanf("%d %c %d",&a,&b,&c);
   printf("%d\t%c\t%d\t",a,b,c);
   switch (b)
   {
   case '+':
       printf("result:%d\n",a+c);
       break;
   case '-':
       printf("result:%d\n",a-c);
       break;
   case '*':
       printf("result:%d\n",a*c);
       break;
   case '/':
       printf("result:%d\n",a/c);
       break;
   case '%':
       printf("result:%d\n",a%c);
       break;
   
   default:printf("Enter the valid operator.\n");
       break;
   }
return 0;
}