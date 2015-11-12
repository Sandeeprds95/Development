#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;

#define     s(n)        scanf("%d",&n)
#define     sll(n)      scanf("%lld",&n)

int main()
{
    int t;
    s(t);
    while(t--)
    {
        int n;
        s(n);
        int a[n];
        for(int i=0;i<n;i++)
            s(a[i]);
        sort(a,a+n);
        int s=0,e=n-1;
        for(int i=0;i<n;++i)
        {
            if(i&1)
                printf("%d ",a[e--]);
            else
                printf("%d ",a[s++]);
        }
        printf("\n");
    }
    return 0;
}
