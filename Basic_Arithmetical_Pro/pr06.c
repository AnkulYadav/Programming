//Paper   of   size   A0   has   dimensions   1189   mm   x   841   mm. Each subsequent  size  A(n)  is  defined  as  A(n-1)  cut  in  half  parallel  to  its shorter  sides. Thus  paper  of  size  A1  would  have  dimensions  841 mm x  594mm. Write  a  program  to  calculate  and  print  paper  sizes A0, A1, A2, ... A8.
#include<stdio.h>


int main(){
    int l=1189,b=841,n;
    int A[9];
    for (int i = 0; i < 9;i++)
    {
        if (i==0)
        {   
            printf("A[%d]=%dx%d\n",i,l,b);
        }
        if (i==1)
        {   
            printf("A[%d]=%dx%d\n",i,l/2,b);
        }
        if (i==2)
        {   
            printf("A[%d]=%dx%d\n",i,l/2,b/2);
        }
        if (i==3)
        {   
            printf("A[%d]=%dx%d\n",i,l/4,b/2);
        }
        if (i==4)
        {   
            printf("A[%d]=%dx%d\n",i,l/4,b/4);
        }
        if (i==5)
        {   
            printf("A[%d]=%dx%d\n",i,l/8,b/4);
        }
        if (i==6)
        {   
            printf("A[%d]=%dx%d\n",i,l/8,b/8);
        }
        if (i==7)
        {   
            printf("A[%d]=%dx%d\n",i,l/16,b/8);
        }
        if (i==8)
        {   
            printf("A[%d]=%dx%d\n",i,l/16,b/16);
        }
        
    }
    

return 0;
}