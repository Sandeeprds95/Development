/*
    Author   : Sandeep Ravindra
    Contest  : practice
    Problem  : Java Vs c++
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>

using namespace std;

#define     LL          long long int
#define     D               double
#define     LD              long double

#define     s(n)        scanf("%d",&n);
#define     ss(n)       scanf("%s",n);
#define     sc(n)       scanf("%c",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define	    all(n)          n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n);
#define     pbl         printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

int main()
{
   // ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
       // freopen("in.txt","r",stdin);
    #endif

    TEST
    {
        int n;
        cin>>n;
        vector<char> r;
        char c;
		for(int i=0;i<n;i++)
        {
			cin>>c;
			r.push_back(c);
		}

        int m;
        int pos;
        bool flag = true;
		for(int i=0; i<n && flag;i++)
        {
			m = r[i];
			pos = i;
			fr(j,i,n)
            {
				if(r[j] < m)
                {
					m = r[j];
					pos = j;
					flag = false;
				}
			}
			if(!flag){
				r.erase(r.begin() + pos);
				r.insert(r.begin() + i,m);
			}

		}
		fr(i,0,n)
            cout<<r[i];
		pbl
    }
return 0;
}
