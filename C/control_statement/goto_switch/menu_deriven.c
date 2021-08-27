//A menu program using infinite loop and switch
#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice;
    while(1)
    {
        
        printf("1.Create Database\n");
        printf("2.Insert new record\n");
        printf("3.Modify a record\n");
        printf("4.Delete a record\n");
        printf("5.Display all records\n");
        printf("6.Exit\n");
        printf("Enter your choice.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
            printf("Database craeated....\n");
            break;
        case 2 :
            printf("Reacord inserted....\n");
            break;
        case 3 :
            printf("Record modified....\n");
            break;
        case 4 :
            printf("Record deleted....\n");
            break;
        case 5 :
            printf("Record display....\n");
            break;
        case 6 :
            exit(1);
        
        default:printf("Please enter the valid number.\n");
            break;
        }
    }

return 0;
}