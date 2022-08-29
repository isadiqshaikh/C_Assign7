#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0, n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("1");
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        printf("\t%d",next);
        prev=cur;
        cur=next;
    }
    return 0;
}
