 #include<stdio.h>
  int main (){
      int i , j, k,n,num;
      printf("Enter the number.\n");
      scanf("%d",&n);
      for ( i = 1; i <=n; i++)
      {  k=n;
         num=k;
         for(j=1;j<=i;j++)
         {
            printf(" %d ",num);
            num--;
          // for ( j = 1; j <=i; j++)
          // {
          //   printf("*");
          // }
          
            
         }
      printf("\n");
      }
      for(i=1;i<=n-1;i++)
      { k=n;
          num=k;
          for(j=1;j<=n-i;j++)
          {
            printf(" %d ",num);
            num--;
            
          }
          printf("\n");
      }

      return 0;
  }