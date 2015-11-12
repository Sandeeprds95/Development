/*
    To print the sum of digits of number. number of digits can be till 10 crore - 10^9
    eg; n=3993
    ->24
    ans ->6
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<iomanip>
using namespace std;

#define     k(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		    ((a)>(b)?(a):(b))
#define     min(a,b)		    ((a)<(b)?(a):(b))
#define	    ll			        long long

int main()
{
    int t;
    k(t);
    while(t--)
    {

        char s[1000000];
        ll index,sod;
        index=sod=0;
         ss(s);
        while(s[index]!='\0')
            {
            sod+=(s[index]-'0');
                if(sod>9)
                    sod-=9;
               index++;
        }
        if(s[0]=='0')
            sod=9;
        printf("%lld\n",sod);
    }
    return 0;
}

