/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : Bon Appetit
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
#define	    p(n )	    printf("%d ",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)
/*
    *To sort a vector of pair
    *By default vector sorts from left to right in a vector of pair
struct sort_pred
{
    bool operator()(const pair< pair < long,long >,long> &left, const pair< pair < long,long >,long> &right)
    {
        return left.second < right.second;
    }
};

std::sort(v.begin(), v.end(), sort_pred());
*/
vector<pair < pair < long,long >, long> > v(100005);

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    TEST
    {
        int n; long k,x,y,z;
        s(n),sl(k);
        v.clear();
            fall(i,0,n)
            {
                sl(x),sl(y),sl(z);
                v.push_back(make_pair(make_pair(z,y),x));
            }
            sort(v.begin(), v.end());

            long c=0,pp=0,pref=0;
            vector<pair<pair<long, long>, long> >::iterator it;
            for(it=v.begin();it<v.end();it++)
            {
                if(it->first.first != pref)
                {
                    c++;
                    pref = it->first.first;
                    pp = it->first.second;
                }
                else
                {
                    if(pp <= it->second)
                    {
                        c++;
                        pp = it->first.second;
                    }
                }
            }
            pl(c),pbl();
    }//testCases

return 0;
}
