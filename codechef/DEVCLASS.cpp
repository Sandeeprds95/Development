/*
    Author   : Sandeep Ravindra
    Contest  : March long'15
    Problem  : Devu and his class
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

#define     fr(i,a,b)       for(ll i=a;i<b;i++)
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

#define     TEST            ll _t; sll(_t) while(_t--)

typedef     pair<int,int> pii;

inline ll pp(ll x,ll y)
{
    if(y==0)
        return 1;
    if(x < 0 )
        x *=-1;
    if(y==1)
        return x;
    return x*x;
}

int main()
{
    #ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif

    TEST
    {
        int type;
        s(type)
        char s[100009],s2[100009],s3[100009];
        ss(s);
        ll c1 = 0, c2 = 0;
        bool flag = false;

        fr(i,0,strlen(s))
        {
            if(s[i] == 'B')
                c1++;
            else
                c2++;
        }

        if(strlen(s) == 1)
            flag = true;
        else if(strlen(s)%2 == 0 && c1 != c2)
            flag = true;
        else if(strlen(s)%2 !=0 && abs(c1-c2) > 1)
            flag = true;

        if(!flag)
        {
            c1 = c2 = 0;
            for(ll i = 0; i < strlen(s); i+=2)
            {
                s2[i] = 'B'; s2[i+1] = 'G';
                s3[i] = 'G'; s3[i+1] = 'B';
            }
            queue<ll> st,st1;

            for(ll i = 0; i < strlen(s); i++)
            {
                if(s[i] == s2[i])
                {
                    c1++;
                    st1.push(i);
                }
                else
                {
                    c2++;
                    st.push(i);
                }
            }
            //cout<<c1<<" "<<c2<<endl;
            ll ans = 0;
            if(c1 == strlen(s) || c2 == strlen(s))
                ans = 0;
            else
            {
                if(c1 >= c2)
                {
                    if(c1 == strlen(s) - 1 && strlen(s) == 3)
                    {
                        ans = 1;
                    }
                    else
                    {
                        //cout<<"q size: "<<st.size()<<endl;
                        if(st.size()%2 == 0)
                        while(!st.empty())
                        {
                            ll r = st.front();
                            st.pop();
                            ans+=pp(abs(r - st.front()),type);
                            st.pop();
                        }
                        else
                            ans = -1;
                    }
                }
                else if(c2 > c1)
                {
                    if(c2 == strlen(s) - 1 && strlen(s) == 3)
                    {
                        ans = 1;
                    }
                    else
                    {
                        //cout<<"q size: "<<st1.size()<<endl;
                        if(st1.size()%2 == 0)
                        while(!st1.empty())
                        {
                            ll r = st1.front();
                            st1.pop();
                            ans+=pp(abs(r - st1.front()),type);
                            st1.pop();
                        }
                        else
                            ans = -1;
                    }
                }
                else
                    ans = 0;
            }
            printf("%lld\n",ans);
        }

        else
            printf("-1\n");
    }
return 0;
}
