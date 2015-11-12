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

#define     fall(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)

ll sum=0;

/*bool check_sanskar(ll a[], int n, int r)
{
    if(r==0)
        return false;
    if(n==0 && sum!=0)
        return false;
    return check_sanskar(a,n-1,r) || check_sanskar(a,n-1,r - a[n-1]);
}*/

bool check_sanskar(ll a[],int n,int val,int k)
{
    int l=0,r=n-1;
    ll s=a[r],c=0;
    if(s == val )
        c++,--r;
    s=a[r];
    while(l<=r)
    {
        if(c == k )
            break;
        if(s > val)
        {
            --r,l=0;
            s=a[r];
        }
        if(s == val)
        {
            c++;--r,++l;
            s=a[r];
        }
        if(s < val)
        {
            s+=a[l];
            ++l;
        }
    }
    if(c == k)
        return true;
    return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
	TEST
	{
	    int n,k;
	    s(n),s(k);
	    ll a[n];
	    sum=0;
	    fall(i,0,n)
	    {
	        sll(a[i]);
	        sum+=a[i];
	    }
	    sort(a,a+n);
	    if(sum%k!=0 || a[n-1] > sum/k )
            printf("no\n");

        else
        {
            bool flag = check_sanskar(a,n,sum/k,k);
            if(flag)
                printf("yes\n");
            else
                printf("no\n");
        }
	}
return 0;
}
