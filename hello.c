#include<stdio.h>
#include<stdlib.h>
struct st
{
        char*a;
};
int main()
{
        int i,n,j;
        char temp;
        struct st s[5];
        n=sizeof s/sizeof s[0];
        for(i=0;i<n;i++)
        s[i].a=malloc(sizeof(char *));

        s[0].a=(char *)'h';
        s[1].a=(char *)'e';
        s[2].a=(char *)'l';
        s[3].a=(char *)'l';
        s[4].a=(char *)'o';

        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                if(s[i].a>s[j].a){
                temp=s[i].a;
                s[i].a=s[j].a;
                s[j].a=temp;
                }
                }
        }
        for(i=0;i<n;i++)
        printf("%c ",s[i].a);
}
