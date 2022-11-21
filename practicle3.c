#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,m[10][10],M[10][10];
    printf("\nEnter the number of rows and columns with space:");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix carefully:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            scanf("%d",&m[j][i]);
    }
    printf("\nThe transpose of the matrix :\n");
    for(int j=0;j<c;j++)
    {
        printf("\n");
        for(int i=0;i<r;i++)
        {
            M[i][j]=m[j][i];
            printf("\t%d",M[i][j]);
        }
    }
}