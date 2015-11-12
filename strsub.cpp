/*
    Author   : Sandeep Ravindra
    Contest  : March long'15
    Problem  : STRSUB
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include<set>
#include<string.h>
#include<vector>
#include<limits.h>
#include<queue>

using namespace std;

#define     ll              long long int
#define     D               double
#define     LD              long double

#define     s(n)        scanf("%d",&n);
#define     ss(n)       scanf("%s",n);
#define     sc(n)       scanf("%c",&n);
#define     sl(n)       scanf("%ld",&n);
#define     sll(n)      scanf("%lld",&n);
#define     sll(n)      scanf("%lld",&n);

#define     fr(i,a,b)       for(int i=a;i<b;i++)
#define	    all(n)	    n.begin(),n.end()

#define     max(a,b)        ((a)>(b)?(a):(b))
#define     min(a,b)        ((a)<(b)?(a):(b))

#define     p(n)        printf("%d",n);
#define     pl(n)       printf("%ld",n);
#define     pll(n)      printf("%lld",n);
#define     pbl      printf("\n");

#define     MP              make_pair
#define     vi              vector<int>
#define     PB              push_back
#define     S               second
#define     F               first

#define     TEST            int _t; s(_t) while(_t--)

typedef     pair<int,int> pii;

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif

	string s,temp,temp1;

	TEST
	{
	    int n,k,q,l,r;
	    int ans = 0;
		s(n)s(k)s(q)
		cin>>s;
		while(q--)
		{
			s(l)s(r)
			temp = s.substr(l-1,r-l+1);
			ll sq = temp.size();
			int x = count(all(temp),'0');
			int y = count(all(temp),'1');

			if(x < k+1 && y < k+1)
                printf("%lld\n",(sq*(sq+1))/2);
            else
            {
                ans = 0;
                fr(j,0,sq)
                    for(int r = 1; r <= (sq - j); r++)
                    {
                        temp1 = temp.substr(j,r);

                        int x1 = count(all(temp1),'0');
                        int y1 = count(all(temp1),'1');
                        if(x1 < k+1 && y1 < k+1)
                            ans++;
                    }
                //}
                printf("%d\n",ans);
            }
//            fr(i,l,r+1)
//            {
//                fr(v,i,r+1)
//                {
//                    int x1=0, x0=0;
//                    fr(z,i,v+1)
//                    {
//                        if(s[z]=='1')
//                            x1++;
//                        else
//                            x0++;
//                    }
//                    if(x1 < k+1 && x0 < k+1 )
//                        c++;
//                }
//            }
//            printf("%d\n",c);
		}
	}
return 0;
}
