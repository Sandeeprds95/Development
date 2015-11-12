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
    int t;
    s(t);
    string s;
    while(t--)
    {
        cin>>s;
        int a[26]={0},c=0;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
            if(a[s[i]-'a']<2)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
