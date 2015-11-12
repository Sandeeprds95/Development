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
#define     min(a,b)		(   (a)<(b)?(a):(b))
#define	    ll			        long long

int main()
{
    int t;
    s(t);
    while(t--)
    {
        char st[100];
        ss(st);
        int c=0;
        for(int i=0;st[i]!='\0';i++)
        {
            if(st[i]=='A' || st[i]=='D' || st[i]=='O' || st[i]=='P' || st[i]=='R' || st[i]=='Q')
                c++;
            else if (st[i]=='B')
                c+=2;
        }
        printf("%d\n",c);
    }
return 0;
}
