/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : ABCD
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>

using namespace std;

#define	    ll		    long long int
#define     D               double
#define     LD              long double

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

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t); while(_t--)

typedef     pair<int,int> pii;

int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in.txt","r",stdin);
	#endif
    ll n;
    sll(n);
    string s1;
    char s2[100003];
    cin>>s1;
    ll len = s1.size();

    for(ll i = 0; i < len-1; i+=2)
    {
        if(s1[i] == 'A')
        {
            if(s1[i+1] == 'B')
            {
                if(s2[i-1] !='C' && i-1 >=0)
                    s2[i] = 'C',
                    s2[i+1] = 'D';
                else
                    s2[i] = 'D',
                    s2[i+1] = 'C';
            }
            else if(s1[i+1] == 'C')
            {
                if(s2[i-1] !='B' && i-1 >=0)
                    s2[i] = 'B',
                    s2[i+1] = 'D';
                else
                    s2[i] = 'D',
                    s2[i+1] = 'B';
            }
            else if(s1[i+1] == 'D')
            {
                if(s2[i-1] !='B' && i-1 >=0)
                    s2[i] = 'B',
                    s2[i+1] = 'C';
                else
                    s2[i] = 'C',
                    s2[i+1] = 'B';
            }
        }
        else if(s1[i] == 'B')
        {
            if(s1[i+1] == 'A')
            {
                if(s2[i-1] !='C' && i-1 >=0)
                    s2[i] = 'C',
                    s2[i+1] = 'D';
                else
                    s2[i] = 'D',
                    s2[i+1] = 'C';
            }
            else if(s1[i+1] == 'C')
            {
                if(s2[i-1] !='A' && i-1 >=0)
                    s2[i] = 'A',
                    s2[i+1] = 'D';
                else
                    s2[i] = 'D',
                    s2[i+1] = 'A';
            }
            else if(s1[i+1] == 'D')
            {
                if(s2[i-1] !='A' && i-1 >=0)
                    s2[i] = 'A',
                    s2[i+1] = 'C';
                else
                    s2[i] = 'C',
                    s2[i+1] = 'A';
            }
        }
        else if(s1[i] == 'C')
        {
            if(s1[i+1] == 'A')
            {
                if(s2[i-1] !='B' && i-1 >=0)
                    s2[i] = 'B',
                    s2[i+1] = 'D';
                else
                    s2[i] = 'D',
                    s2[i+1] = 'B';
            }
            else if(s1[i+1] == 'B')
            {
                if(s2[i-1] !='A' && i-1 >=0)
                    s2[i] = 'A',
                    s2[i+1] = 'D';
                else
                    s2[i] = 'D',
                    s2[i+1] = 'A';
            }
            else if(s1[i+1] == 'D')
            {
                if(s2[i-1] !='A' && i-1 >=0)
                    s2[i] = 'A',
                    s2[i+1] = 'B';
                else
                    s2[i] = 'B',
                    s2[i+1] = 'A';
            }
        }
        else if(s1[i] == 'D')
        {
            if(s1[i+1] == 'A')
            {
                if(s2[i-1] !='B' && i-1 >=0)
                    s2[i] = 'B',
                    s2[i+1] = 'C';
                else
                    s2[i] = 'C',
                    s2[i+1] = 'B';
            }
            else if(s1[i+1] == 'B')
            {
                if(s2[i-1] !='A' && i-1 >=0)
                    s2[i] = 'A',
                    s2[i+1] = 'C';
                else
                    s2[i] = 'C',
                    s2[i+1] = 'A';
            }
            else if(s1[i+1] == 'C')
            {
                if(s2[i-1] !='A' && i-1 >=0)
                    s2[i] = 'A',
                    s2[i+1] = 'B';
                else
                    s2[i] = 'B',
                    s2[i+1] = 'A';
            }
        }
    }
    s2[len] = '\0';
    for(ll i=0;s2[i] != '\0';i++)
        printf("%c",s2[i]);
    pbl();
return 0;
}
