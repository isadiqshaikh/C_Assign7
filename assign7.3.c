#include<stdio.h>
int main()
{
    int i,n,prev=0,cur=0,next=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
        if(next==n)
        {
        printf("found");
        break;
        }
        if(next>n)
        {
            printf("Not found");
            break;
        }

    }
}
