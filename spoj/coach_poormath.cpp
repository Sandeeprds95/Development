/*python code

    import sys
def exp(a, b, q):
    p = a
    r = 1
    while b:
        if b & 1:
            r *= p
            r %= q
        p *= p
        p %= q
        b >>= 1
    return r
t=int (input())
while t:
    x,y=map(int,sys.stdin.readline().split())
    res=exp(x,y,1000000007)
    print res
    t=t-1

*/

#include<iostream>
using namespace std;

#define mod 1000000007

long long e(long long a,long long b)
{
    long long result=1;
        while(b>0)
        {
            if(b%2)
                result=(result*a)%mod;
            b=b>>1;
            a=(a*a)%mod;
        }
        cout<<result<<endl;
}

int main()
{
    int t;
    long long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        e(a,b);
    }
    return 0;
}
