#include<stdio.h>
int main()
{
    int a ,b,i,hcf=1;
    printf("Enter two number : ");
    scanf("%d",&a,&b);

    int min = a<b? a:b;
    for(i=1;i<=min;i++)
    {
        if((a%i==0)&&(b%i==0))
            hcf=i;
    }
    printf("The HCF is %d\n ",hcf);

    return 0;
}
