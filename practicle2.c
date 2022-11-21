/*Author: Divyanshu Yadav
Note: incase you are using old dumb compiler then pls do following changes-
	~change scanf_s to scanf
	~change _getch to getch
	~use clrscr if cls is not working
	~change printf_s to printf
please appreciate*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c1_elem,  r1_elem, m[10][10],n[10][10],x[10][10];
	printf("\nEnter the  the no. of rows and columns <with space> of matrix-1");
	scanf_s("%d%d", &c1_elem, &r1_elem);
	
	printf("\nEnter the matrix-1 carefully\n");
	//READING MATRIX 1
	for (int i = 0; i < c1_elem; i++)
	{	for (int j = 0; j < r1_elem; j++)
			scanf_s("%d", &m[j][i]);
	}
	//READING MATRIX 2
	printf("\nEnter the matrix-2 carefully\n");
	for (int i = 0; i < c1_elem; i++)
	{	for (int j = 0; j < r1_elem; j++)
		{	scanf_s("%d", &n[j][i]);
			x[j][i]=m[j][i]+n[j][i];
		}
	}
	//printing matrix
	printf("\nthe additionj of maxtrix is follows-");
	for (int i = 0; i < c1_elem; i++)
	{
		printf("\n");
		for (int j = 0; j < r1_elem; j++)
			printf("\t%d", x[j][i]);
	}
}