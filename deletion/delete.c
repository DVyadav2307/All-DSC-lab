#include<stdio.h>
int deletion();
int main()
{
    int arr[100],n,loc;
    printf("enter the lenght of the dtat:");
    scanf_s("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nenter the data num %d= ",i+1);
        scanf_s("%d",&arr[i]);
    }
    printf("enter the location of the deletion data:");
    scanf_s("%d",&loc);
    deletion(arr,n,loc);
    for(int i=0;i<n-1;i++)
    printf("\n %d",arr[i]);
}
int deletion(int arr[],int n,int loc)
{
   
    for(int i=loc;i<n;i++)
    {
         arr[i-1]=arr[i];
    }
}