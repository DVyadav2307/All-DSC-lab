//Author Divyanshu yadav
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int searching();
int deletion();
int insert();
int traverse();
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
    printf("\n\n THE DATA HAS BEEN SAVED!!!\nchoose the operation you want to do:\n\t1)TRAVERSING\n\t2)SEARCHING\n\t3)INSERTION\n\t4)DELETION\n choose here>>");
    int choice;
    scanf_s("%d",&choice);
    switch(choice){
        case 1:
    traverse(arr,n);
        break;
        case 2:
    searching(arr,n);
        break;
        case 3:
    insert(n,arr);
        break;
        case 4:
    deletion(arr,n);
        break;
        default:
        printf("\n program complete");
    }
     return 0; 
}
int traverse(int tra[],int n)
{
    int i=0;
    printf("\n The value of the data structure");
    for(i;i<n;i++){
        printf("%4d",tra[i]);
    }
    return 0;
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
    return 0;
}
int insert(int n, int data[])
{
    int iteam, loc;
    printf("Eneter the new data=");
    scanf_s("%d",&iteam);
    printf("\nenetr the data location=");
    scanf_s("%d",&loc);
    int temp=n-1;
    for(temp;temp>=loc-1;temp--)
    {
        data[temp+1]=data[temp];
    }
   data[loc-1]=iteam;
   printf("\nthe new data :");
   for(int i=0;i<=n;i++)
   {
    printf("%4d",data[i]);
   }
    return 0;
}
int deletion(int arr[],int n)
{
    int loc;
   printf("enter the location of the deletion data:");
    scanf_s("%d",&loc);
    for(int i=loc;i<n;i++)
    {
         arr[i-1]=arr[i];
    }
    for(int i=0;i<n-1;i++)
    printf("\n %d",arr[i]);
    return 0;
}
