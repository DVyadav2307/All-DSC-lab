#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", & n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int check();
int main()
{
    system("cls");
    int mat1[10][10],mat2[10][10],r1,c1,r2,c2,mat3[10][10];//MATRIX 1
    mat3[1][1]=0;
    printf("\nMATRIX 1: Enter number of rows<space>columns:");
    scanf("%d%d",&r1,&c1);
    printf("\nMATRIX 2: Enter number of rows<space>columns:");//MATRIX 2
    scanf("%d%d",&r2,&c2);
    int maxlim=check(r1,c2);//fuction call
    //printf("\nThe max lim is %d",maxlim);

    printf("\nEnter the elements of MATRIX 1-\n");
    for(int i=1;i<=r1;i++)//i denotes elements in a columns--which is equal to number of rows
    for(int j=1;j<=c1;j++)//j denotes elemnts in a rows--which is equal to the number of columns
    scanf("%d",&mat1[i][j]);

    printf("\nEnter the elements of MATRIX 2-\n");
    for(int i=1;i<=r2;i++)//i denotes elements in a columns--which is equal to number of rows
    for(int j=1;j<=c2;j++)//j denotes elemnts in a rows--which is equal to the number of columns
    scanf("%d",&mat2[i][j]);
   // printf("\nterminated %d %d",mat1[1][3],mat2[2][1]);

    for(int i=1;i<=maxlim;i++)//multiply function
    {
        for(int j=1;j<=maxlim;j++)
        {
            for(int maxcount=1;maxcount<=maxlim;maxcount++)
            {
                printf("\n %d   %d %d",mat3[i][j],mat1[i][maxcount],mat2[maxcount][j]);
                mat3[i][j]=mat3[i][j] + (mat1[i][maxcount]*mat2[maxcount][j]);
            }
        }
    }
     for(int j=0;j<maxlim;j++)
    {
        printf("\n");
        for(int i=0;i<maxlim;i++)
        {
            printf("\t%d",mat3[i][j]);
        }
    }
}
int check(int row, int column)
{
    if(row==column)
    return row;
    else
    {
        printf("\n Wrong input --not possible!\nHit enter and try again ;-)");
        _getch();
       main();
    }
}*/