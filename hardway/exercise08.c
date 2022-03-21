//this is the program  for learning if ,elseif ,else
#include<stdio.h>
 
int main(int argc, char * argv[]){
    int i= 0;
    if(argc == 1){
        printf("You Only have One argument. You suck .\n");
    }else if (argc > 1 ||   argc < 4)
    {
        printf("Here's Your arguments : \n");
        for ( i = 0; i < argc; i++)
            {
                printf("%s",argv[i]);
            }
            printf("\n");
    }else
    {
        printf("You Have too many arguments. you suck.\n");
    }
    return 0;
}