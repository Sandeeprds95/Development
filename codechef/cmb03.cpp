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

int main()
{
    string a,b;
    int t;
    s(t);
    while(t--)
    {
        cin>>a>>b;
        int c=0,flag=0,j;
        for(int i=0;i<a.size();i++)
        {
            j=0;
            while(b[j]==a[i] && j<b.size() && i<a.size())
                j++,i++,c++;
            if(c==b.size())
            {
                flag=1;
                break;
            }
            else
                c=0,i-=j;
        }
        if(flag)
            printf("1\n");
        else
            printf("0\n");
    }
return 0;
}
