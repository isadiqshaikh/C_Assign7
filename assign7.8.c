#include<stdio.h>
int main()
{
    int i,n,flag=0;

    for(n=10;1;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            flag=1;


        }
        if(flag==0)
        {
          printf("\t%d",n);
          break;
        }

    }
    return 0;
}
