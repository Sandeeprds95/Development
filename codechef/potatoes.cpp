#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		    ((a)>(b)?(a):(b))
#define     min(a,b)		    ((a)<(b)?(a):(b))
#define	    ll			        long long

int a[2005]={},p[350]={};
int main()
{
    int l=0;
    a[0]=a[1]=1;
    for(int i=2;i<2010;i++)
    {
        if(a[i]==0)
        {
            p[l++]=i;
            for(int j=i*i;j<2008;j+=i)
                a[j]=1;
        }
    }
    //fall(i,0,350)
      //  printf("%d ",p[i]);
    int t;
    s(t);
    while(t--)
    {
        int x,y;
        s(x);s(y);
        int i=0;
        while((x+y)>p[i])
            i++;
        if(x+y != p[i])
            printf("%d\n",p[i]-x-y);
        else
            printf("%d\n",p[i+1]-x-y);
    }
return 0;
}
