#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
        char name[100];
        char branch[100];
        double mark;
        struct student *next;
}st;
void addend(st**,int);
void print(st*);
int main()
{
        st*hptr=0;
        int n,i=0;
        printf("enter the student count\n");
        scanf("%d",&n);
        while(i++!=n)
        addend(&hptr,i);
        printf("student details printing\n");
        print(hptr);
}
void addend(st**ptr,int i)
{
        st*temp=(st*)malloc(sizeof(st));
        printf("enter student%d details\n",i);
        printf("NAME:");
        scanf("%s",temp->name);
        printf("BRANCH:");
        scanf("%s",temp->branch);
        printf("MARK:");
        scanf("%lf",&temp->mark);
        if(*ptr==NULL){
        temp->next=*ptr;
        *ptr=temp;}
        else
        {
        st*last=*ptr;
	while(last->next!=0)
        last=last->next;
        temp->next=last->next;
        last->next=temp;
        }
}
void print(st*ptr)
{
        while(ptr!=0)
        {
                printf("NAME:%s\nBRANCH:%s\nMARK:%0.2lf\n",ptr->name,ptr->branch,ptr->mark);
                ptr=ptr->next;
        }
}
