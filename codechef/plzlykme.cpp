//Please like me
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
#define     max(a,b)		((a)>(b)?(a):(b))
#define     min(a,b)		((a)<(b)?(a):(b))
#define	    ll			long long

int main()
{
    int t;
    ll l,d,s,c;
    s(t);
    while(t--)
    {
        sll(l);sll(d);sll(s);sll(c);
        ll ss=s;
        fall(i,1,d)
        {
            ss=ss+ss*c;
            if(ss>l)
                break;
        }
        if(ss<l)
            printf("DEAD AND ROTTING\n");
        else
            printf("ALIVE AND KICKING\n");
    }
return 0;
}
