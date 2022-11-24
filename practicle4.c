#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int check();
int main()
{
    system("cls");
    int mat1[10][10],mat2[10][10],r1,c1,r2,c2,mat3[10][10];//MATRIX 1
    printf("\nMATRIX 1: Enter number of rows<space>columns:");
    scanf("%d%d",&r1,&c1);
    printf("\nMATRIX 2: Enter number of rows<space>columns:");//MATRIX 2
    scanf("%d%d",&r2,&c2);
    check(r1,c2);//fuction call

    printf("\nEnter the elements of MATRIX 1-\n");
    for(int i=1;i<=r1;i++)//i denotes elements in a columns--which is equal to number of rows
    for(int j=1;j<=c1;j++)//j denotes elemnts in a rows--which is equal to the number of columns
    scanf("%d",&mat1[i][j]);

    printf("\nEnter the elements of MATRIX 2-\n");
    for(int i=1;i<=r2;i++)//i denotes elements in a columns--which is equal to number of rows
    for(int j=1;j<=c2;j++)//j denotes elemnts in a rows--which is equal to the number of columns
    scanf("%d",&mat2[i][j]);
    printf("\nterminated %d %d",mat1[1][3],mat2[2][1]);

    for(int i=1;i<=r1;i++)//multiply function
}
int check(int row, int column)
{
    if(row==column)
    return 0;
    else
    {
        printf("\n Wrong input --not possible!\nHit enter and try again ;-)");
        _getch();
       main();
    }
}