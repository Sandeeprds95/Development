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
	string st;
	for(s(t);t--;)
    {
        int c=0;
        cin>>st;
        fall(i,0,st.size()-1)
        {
            if(st[i]==st[i+1])
                c++;
        }
        printf("%d\n",c);
    }
return 0;
}
