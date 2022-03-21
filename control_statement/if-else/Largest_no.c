// find largest no between three
//
#include<stdio.h>
 
int main(){
int a,b,c;
printf("Enter the number\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
    if (a>c)
    {
        printf("greatest=%i\n",a);
    }
    else
    {
        printf("Greatest=%i\n",b);
    }
}
else
{
    if (b>c)
    {
        printf("greatest=%i\n",b);
    }
   else
   {
       printf("greatest=%i\n",c);
   }
    
}

return 0;
}