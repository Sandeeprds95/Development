#include<stdio.h>
int main()
{
    long n,k,c=0,t,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t%k==0)
            c++;
    }
    printf("%d",c);
    return 0;
}
