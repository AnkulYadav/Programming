//this is the 12 example 
#include<stdio.h>
 
int main( int argu , char * argv[]){
    int areas[] = {12,32,53,123,13};
    char name[] = "AnKul";
    char full_name[]={
        'A','n','k','u','l',' ','Y','a','d','a','v','\0'
    };

    printf("the size of an int : %ld\n",sizeof(int ));
    printf("the size of areas (int[]) : %ld\n",sizeof(areas ));
    printf("The number of ints in areas : %ld\n",sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d\n",areas[0],areas[1]);
    printf("The size of char : %ld\n",sizeof(char));
    printf("The size of name (char[]) : %ld\n",sizeof(name));
    printf("The number of chars : %ld\n",sizeof(name)/sizeof(char));
    printf("The size of full name (char[}):%ld\n",sizeof(full_name));
    printf("the numbers of char : %ld\n",sizeof(full_name)/sizeof(char));
    printf("name =\"%s\" and full name = \"%s\" \n",name ,full_name);

 
return 0;
}