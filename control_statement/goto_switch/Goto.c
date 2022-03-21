//goto is the unconditional control statement that transfer the flow of control to another part of program .
//Switch :this is a multi-way conditional control statement which helps us to make choice among a number of choices or alternative
//rating chart
#include<stdio.h>

int main(){
    int a;
    printf("Enter the number .\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Poor\n");
        break;
    case 2:
        printf("ordinary\n");
        break;
    case 3:
        printf("good\n");
        break;
    case 4:
        printf("very good\n");
        break;
    case 5:
        printf("excellent\n");
        break;
    
    default:printf("Please enter number between 1 to 5");
        break;
    }
    return 0;
}