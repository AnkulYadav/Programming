// This is a Program that print the transpose of a matrix
#include<stdio.h>
#define row 3
#define col 4
int main(){
    int i,j,mat1[row][col],mat2[row][col];
    printf("Enter the matrix of order (%dx%d) row-wise:\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Before the transpose of matrix of order (%dx%d) row-wise :\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            mat2[i][j]=mat1[j][i];
        }
    }
    printf("After the transpose of matrix of order (%dx%d) row-wise :\n",col,row);
    // printf("After the transpose of matrix   :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d  ",mat2[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}