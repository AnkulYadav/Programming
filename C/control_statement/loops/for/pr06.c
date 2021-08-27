//nesting of loops
#include<stdio.h>
 
int main(){
for (int i = 0; i < 3; i++)
{
    printf("i=%d\n",i);
    for (int  j= 0; j<=4; j++)
    {
        printf("j=%d\t",j);
    }
    printf("\n");
}

return 0;
}