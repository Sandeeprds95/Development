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

bool check_money(int a[],int n, int m)
{
    if(n == 0 && m > 0)
        return false;

    if(m == 0 )
        return true;

    if(a[n-1] > m)
        return check_money(a,n-1,m);

    return check_money(a, n-1, m) || check_money(a, n-1, m - a[n-1]);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        int n,m;
        s(n),s(m);
        int a[20] = {};
        fr(i,0,n)
            s(a[i]);
        sort(a,a+n);
        bool flag = check_money(a,n,m);
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
return 0;
}
