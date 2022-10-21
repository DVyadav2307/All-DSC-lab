//Author Divyanshu yadav
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int searching();
int main ()
{
    system("cls");
    int arr[50],n,i=0;
    printf("\nEnter the total number of entries=");
    scanf_s("%d",&n);
    for(i;i<n;i++)
    {
        printf("\nEnter the number %d >>",i+1);
        scanf_s("%d",&arr[i]);
    }
    printf("\nHit enter to save data");
    _getch();
    printf("\n\n THE DATA HAS BEEN SAVED!!!");
    _getch();
    //system("cls");
    searching(arr,n);
}
int searching(int search[],int n)
{
    a:
    int flag=0,iteam,i=0;
    system("cls");
    printf("Enter the data you want to search=");
    scanf_s("%d",&iteam);
    //printf("\n Just before for");
    for(i;i<n;i++)
    {
       // printf("\n I am i=%d",i);
        if(iteam==search[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n The item is present!!");
    else
    printf("\nThe item is unavailable!!");
    printf("hit enter to try again else ^c to exit.");
    _getch();
    goto a;
}