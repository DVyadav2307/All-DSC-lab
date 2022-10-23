#include<stdio.h>
int search();
int main()
{
    int n,i,data[100];
    printf("\nenter the lenght of the database");
    scanf_s("%d",&n);
    printf("\n Alright! enter the data--");
    for(i=0;i<n;i++)
    {
        printf("\n data at location %d= ",i+1);
        scanf_s("%d",&data[i]);
    }
    search(n,data);
    return 0;
}
int search(int n, int data[])
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