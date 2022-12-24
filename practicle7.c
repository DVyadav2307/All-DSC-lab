#include<stdio.h>
#include<stdlib.h>
struct dnode
{
    struct dnode *llink;
    int data;
    struct dnode *rlink;
};
void doubly_listdisplay(struct dnode *start);
struct dnode *doubly_listcreate(struct dnode *start);
void main()
{
    struct dnode *start;
    start=NULL;
    
    printf("\n you are creating a doubly lined list.\n");
    start=doubly_listcreate(start);
    
    doubly_listdisplay(start);
}
struct dnode *doubly_listcreate(struct dnode *start)
{
    struct dnode *temp,*current;
    int item;
    printf("enter -1111 to terminate the doubly linked list=");
    scanf("%d",&item);
    
    while(item != -1111)
    {
        temp=(struct dnode*) malloc(sizeof(struct dnode));
        temp->data=item;
        temp->rlink=NULL;
        
        if(start==NULL)
        {
            temp->llink=NULL;
            start=temp;
        }
        else
        {
            current->rlink=temp;
            temp->llink=current;
        }
        current=temp;
        printf("enter -1111 to terminate the doubly linked list=");
        scanf("%d",&item);
    }
    return start;
}

void doubly_listdisplay(struct dnode *start)
{
    printf("\n START<-->");
    while(start !=NULL)
    {
        printf("%d<-->",start->data);
        start=start->rlink;
    }    
    printf("END\n");
}