//input and output string and address of the every index using scanf and printf 
#include<stdio.h>
 
int main(){
    char str[40],gf[50];
    printf("enter the name \n");
    scanf("%s",str);
    printf("%s %s \n",str,"Yadav");
    // second method of input and output using gets and puts 
   for (int  i = 0; i < 2; i++)
   {
    printf("Enter your girlfriend number\n");
    gets(gf);
    printf("the name of your girlfriend is : ");
    puts(gf);
   }
   
    
return 0;
}