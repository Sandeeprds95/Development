/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Permutation Cycle
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
    int n;
    int a[1003],b[1003]={};
    s(n);
    if(n == 0)
        return 0;
    if(n == 1)
    {
			s(n);
			printf("1\n");
			printf("1 1\n");
			return 0;
    }
    fr(i,0,n)
        s(a[i]);
    int start = 1,val = 1,c=0,i,k[1003],m[1003]={},l=0,r=1;
    k[0] = val;
    while(start <= n)
    {
        b[l++] = start;
        m[start -1 ] = 1;
        start = a[start-1];
        if(start == val)
        {
            b[l++] = val;
            c++;
             i=0;
            while(1)
            {
                if(m[i] == 0)
                {
                    val = i+1,k[r++] = i+1,start = i+1;
                    break;
                }
                if(i == n)
                {
                    start = n;
                    break;
                }
                i++;
            }
        }
    }
    p(c),pbl();
    int key=0;
    fr(j,0,c)
    {
        p(b[key]);
        i=key+1;
        while(1)
        {
            if(b[key] != b[i])
                printf(" %d",b[i]);
            else
            {
                printf(" %d",b[key]),key=i+1;
                break;
            }
            i++;
        }
        pbl();
    }
return 0;
}
