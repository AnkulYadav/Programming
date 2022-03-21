//this is the program about string and array
#include<stdio.h>
 
int main(int argu, char * argv[]){
    int numbers[4]= {0};
    char name [4] = { 'a'};
    for (int  i = 0; i < 4; i++)
    {
        printf("numbers: %d ",numbers[i]);
    }
    for (int  i = 0; i < 4; i++)
    {
        printf("name: %c ",name[i]);
    }
    // set up the numbers
    for (int  i = 0; i < 4; i++)
    {
        numbers[i] = i+1;
    }
    // set up the name 
    for (int  i = 0; i < 4; i++)
    {
        name[i] = 'S'+1;
    }
  for (int  i = 0; i < 4; i++)
    {
        printf("numbers: %d ",numbers[i]);
    }
    for (int  i = 0; i < 4; i++)
    {
        printf("name: %c ",name[i]);
    }
    printf("Name : %s\n",name);

    char * another = "Ankul";
    printf ( "another : %s \n",another);
    printf("another each : %c %c %c %c %c %c ",another[0],another[1],another[2],another[3],another[4],another[5]);
    

    
    
return 0;
}