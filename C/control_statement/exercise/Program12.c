//
#include<stdio.h>
 
int main(){
int i, total=0;
for(i=1;i<=10;i++)
{
    switch (i)
    {
    case 1:
    case 4:
    case 5:
    case 7:
    total +=i;
        break;
    
    default:
        continue;
    }
    printf("%d\t",i);
}
printf("total =%d\n",total);
return 0;
}