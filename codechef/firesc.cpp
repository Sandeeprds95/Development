/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Fire Escape Routes
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

vector<vector<int> > v;
vector<bool> visited;

ll c = 0;

void dfs(int j)
{
    c++;
    visited[j] = true;

    for(vector<int>::iterator it = v[j].begin();it != v[j].end();it++)
    {
        if(visited[*it] == false)
            dfs(*it);
    }
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        long n,m,x,y,escRoutes=0,noOfCaptains=1;
        sl(n),sl(m);
        v = vector<vector<int> > (n);
        visited = vector<bool> (n,false);
        fr(i,0,m)
        {
            sl(x),sl(y);
            x--,y--;
            v[x].PB(y);
            v[y].PB(x);
        }
        fr(i,0,n)
        {
            if(visited[i] == true)
                continue;
            escRoutes++;
            c = 0;
            dfs(i);
            noOfCaptains = (ll)c * noOfCaptains % 1000000007;
        }
        printf("%ld %ld\n", escRoutes,noOfCaptains);
    }
return 0;
}
