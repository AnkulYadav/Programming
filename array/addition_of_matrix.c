// This is the program that add the two matrix given by the user 
#include<stdio.h>

int main()
{
    int arr1[3][3],arr[3][3],sum[3][3],i,j;
    printf("Enter the matrix 1\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Enter the matrix 2\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("Enter the matrix 1\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
        
    }
    printf("The sum of the matrix 1 and matrix 2 is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");

        
    }
    

    return 0;
}