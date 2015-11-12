/*
	Author   : Sandeep Ravindra
	Contest  : Praatice
	Problem  : BIT MAP
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>

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

#define     TEST            int _t;s(_t);while(_t--)
typedef     pair<int,int> pii;

#define     MAX         200
#define     inf         INT_MAX
int ans[MAX][MAX];
int visited[MAX][MAX];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    TEST
    {
        queue<pii > q;
        int n,m;
        s(n),s(m);

        fr(i,0,n)
        {
            fr(j,0,m)
                ans[i][j] = inf,
                visited[i][j] = 0;
        }

        char ch;
        getchar();
        fr(i,0,n)
        {
            fr(j,0,m)
            {
                ch = getchar();
                if(ch == '1')
                    q.push(MP(i,j)), ans[i][j] = 0;
            }
            getchar();
        }

        while(! q.empty())
        {
            pii node = q.front();
            visited[node.F][node.S] = 1;
            q.pop();
            fr(i,0,4)
            {
                int x = node.F + dx[i];
                int y = node.S + dy[i];
                if(ans[x][y] != 0)
                {
                    if(x>=0 && x<n && y>=0 && y<m)
                    {
                        if(visited[x][y] == 0)
                        {
                            visited[x][y] = 1;
                            ans[x][y] = ans[node.F][node.S] + 1;
                            q.push(MP(x,y));
                        }
                    }
                }
            }
        }

        fr(i,0,n)
        {
            fr(j,0,m)
                printf("%d ",ans[i][j]);
            pbl();
        }
    }
return 0;
}
