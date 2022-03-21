// dynamic array
#include<stdio.h>
#include<stdlib.h>
 
int main(){
    
    int *ptr,i,n;
    printf("Enter the number of integer to be entered: \n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int ));
    if (ptr==NULL)
    {
        printf("memory is not sufficient \n");
        exit(1);
    }
    for ( i = 0; i < n; i++)
    {
        printf("enter the integer \n");
        scanf("%d",&ptr[i]);
    }
    for ( i = 0; i <n; i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr=NULL;

    // dynamically allocate a 2D array using pointer to an array
    int j,rows;
    int (*arr)[4];
    printf("\nEnter the number of rows \n");
    scanf("%d",&rows);
    arr = (int (*)[4])calloc(rows*4,sizeof(int ));
    for ( i = 0; i <rows; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("enter the matrix[%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }        
    }
     for ( i = 0; i < rows; i++)
        {
            for(j=0;j<4;j++)
            printf("%d ",arr[i][j]);
            printf("\n");
        }
    
    free(arr);
        arr=NULL;  
    
    
 
return 0;
}