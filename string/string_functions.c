//this is the program that describe most used the string manipulations functions
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    printf("Enter the name : ");
    gets(str);
    printf("the length of your name is : %u",strlen(str));
    //strcmp()
    char str1[20],str2[20];
    printf("\nenter the strings\n");
    gets(str1);
    gets(str2);
    if (strcmp(str1,str2)==0)
    {
        printf("String are same \n");
    }
    else
    {
        printf("String are not same \n");
    }
    //strcpy()
    
return 0;
}