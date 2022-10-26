//hello
#include<stdio.h>
#include<stdlib.h>
int traverse();
int main()
{
    system("cls");
    int arr[50],n,i;
    printf("\n Enter the total number of data:");
    scanf_s("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the number %d >>",i+1);
        scanf_s("%d",&arr[i]);
    }
    traverse(arr,n);
}
int traverse(int tra[],int n)
{
    int i=0;
    printf("\n The value of the data structure");
    for(i;i<n;i++){
        printf("%4d",tra[i]);
    }    
}