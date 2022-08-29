#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0, n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;

        prev=cur;
        cur=next;
    }
    printf("\t%d",next);
    return 0;
}
