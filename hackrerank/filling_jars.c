#include<stdio.h>
int main()
{
    long int n,m,a,b,k,t=0;
    int i;
    scanf("%ld%ld",&n,&m);
    //long int arr[n];
    while(m--)
    {
        scanf("%ld%ld%ld",&a,&b,&k);
        for(i=a-1;i<b;i++)
            t+=k;
    }
    printf("%ld",t/n);
    return 0;
}
