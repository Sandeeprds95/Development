/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : CLOSING THE TWEETS
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
#define     sl(n)	    scanf("%ld",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fr(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    int open[1003] = {};
    int n,k,c=0,input;
    s(n),s(k);
    string s;
    fr(i,0,k)
    {
        cin>>s;
        if(s != "CLOSEALL")
            cin>>input;
        if(s == "CLOSEALL")
            memset(open,0,sizeof(open)),
            c=0;
        else if(open[input-1] == 0)
            open[input-1] = 1,
            c++;
        else
            open[input-1] = 0,
            c--;

    p(c),pbl();
    }
return 0;
}
