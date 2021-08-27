//
#include<stdio.h>
#include<stdlib.h>
 
int main(){
 int choice;
 while(1){
 printf("1.Sing up\n");
 printf("2.Sing in\n");
 printf("3.forwoget password....\n");
 printf("4.others methods of login into pages\n");
 printf("5.exit\n");
 printf("Enter the Choice\n ");
 scanf("%d",&choice);
 switch (choice)
 {
 case 1:
     printf("Please Enter your name ....\n");
     printf("Please enter the date of birth\n");
     break;
 case 2:
     printf("Please Enter your name ....\n");
     printf("please enter your password\n");
     break;
 case 3:
     printf("Please Enter your name ....\n");
     printf("Please enter new password...\n");
     break;
 case 4:
     printf("Please Enter your name ....\n");
     printf("facebook & youtube\n");
     break;
 case 5:
   return 0;
     break;
 
 default:
 printf("please enter the correct choice above.\n");
     break;
 }
}
return 0;
}