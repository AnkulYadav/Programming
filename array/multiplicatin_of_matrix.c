//This the program that print the multiplication of the matrix

#include<stdio.h>
#define row1 3
#define col1 4
#define row2 col1
#define col2 2

int main(){
    int i,j,k,mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];
    printf("Enter the matrix 1 of order (%dx%d) with row-wise\n",row1,col1);
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the matrix 2 of order (%dx%d) with row-wise\n",row2,col2);
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    //multiplication of matrix of the above matrices
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            mat3[i][j]=0;
            for(k=0;k<col1;k++)
            mat3[i][j] +=mat1[i][k]*mat2[k][j];
        }
        
    }
    printf("The multiplication of the matrix 1 and matrix 2 is :\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d  ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}