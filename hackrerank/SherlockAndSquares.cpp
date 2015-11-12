#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long e(unsigned long long x,unsigned long long m,unsigned long long mod)
{
    unsigned long long result=1;
        while(m>0)
        {
            if(m%2==1)
                result=((result%mod)*(x%mod))%mod;
            m=m>>1;
            x=((x%mod)*(x%mod))%mod;
        }
        return result;
}

int main() {
    long t;
    scanf("d",&t);
    while(t--)
        {
        unsigned long long n,sum=4;
        scanf("lld",&n);
        sum+=(e(2,n+1,1000000007)-2)%1000000007;
        cout<<sum%1000000007<<endl;
    }
    return 0;
}
