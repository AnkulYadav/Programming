//this is the program that uses no function with no argument and no return values
//
#include<stdio.h>
 
 void displaymenu(void);

int main(void){
    int choice;
    displaymenu();
    printf("Enter Your Choice....\n");
    scanf("%d",&choice);
 
return 0;
}
void displaymenu(void)
{
    printf("1.Create Database...\n");
    printf("2.Insert new records...\n");
    printf("3.Modified a record...\n");
    printf("4.Delete a record...\n");
    printf("5.Display all records..\n");
    printf("6. Exit\n");
}