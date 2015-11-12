/*
	Author   : Sandeep Ravindra
	Contest  :
	Problem  :
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>

using namespace std;

#define	    ll		    long long

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fall(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    p(n )	    printf("%d ",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        string s1,s2;
        cin>>s1>>s2;
        int a[62]={},b[62]={};
        fall(i,0,s1.size())
        {
            if((int)s1[i] > 96)
                a[s1[i]-'a']++;
            else if((int)s1[i] > 64)
                a[s1[i]-'A' + 26]++;
            else
                a[s1[i]-'0' + 52]++;
        }
        fall(i,0,s2.size())
        {
            if((int)s2[i] > 96)
                b[s2[i]-'a']++;
            else if((int)s2[i] > 64)
                b[s2[i]-'A' + 26]++;
            else
                b[s2[i]-'0' + 52]++;
        }
        int c=0;
        fall(i,0,62)
        {
            c+=min(a[i],b[i]);
        }
        p(c),pbl();
    }
return 0;
}
