#include<iostream>
#include<cstdio>
using namespace std;

#define     s(n)        scanf("%d",&n)
#define     sll(n)        scanf("%lld",&n)

int a[205]={};
int main()
{
    int n,m,temp;
    s(n);
    for(int i=0;i<n;i++)
    {
        s(temp);
        if(temp<0)
            a[temp+100]+=1;
        else
            a[temp+100]+=1;
    }
    s(m);
    for(int i=0;i<m;i++)
    {
        s(temp);
        if(temp<0)
            a[temp+100]+=1;
        else
            a[temp+100]+=1;
    }
    for(int i=0;i<201;i++)
    {
        if(a[i]>1)
            printf("%d ",i-100);
    }
    return 0;
}
