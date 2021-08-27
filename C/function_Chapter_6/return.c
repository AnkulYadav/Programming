//this the program to understand the return statement 
//
#include<stdio.h>
 void select(int age,float ht);

int main(){
    int age;
    float ht;
    printf("Enter the age and height : \n");
    scanf("%d%f",&age,&ht);
    select(age ,ht);
    
 
return 0;
}
void select(int age ,float ht)
{
    if (age>=25)
    {
        printf("You are not selected >>>>>>> For next round.\n");
        return ;
    }
    if (ht<5)
    {
          printf("You are not selected >>>>>>> For next round.\n");
        return ;
    }
    printf(" selected.\n");
    
    
}