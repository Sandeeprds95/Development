#include<iostream>
#include<cstdio>
using namespace std;

#define     ll              long long
#define     sll(n)          scanf("%lld",&n)
#define     fall(i,b)       for(int i=0;i<b;i++)

ll b_search(ll t,ll n,ll *a)
{
    ll first=0,last=n-1,mid;
    int f=0;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==t)
        {
            int i=1;
            while(a[mid-i]==t)
                mid=mid-i,i++;
            f=1;
            break;
        }
        else if(a[mid]<t)
            first=mid+1;
        else
            last=mid-1;
    }
    return f ? mid : -1;
}

int main()
{
    ll n,q,t;
    sll(n);sll(q);
    ll a[n];
    fall(i,n)
        sll(a[i]);
    fall(i,q)
    {
        sll(t);
        printf("%lld\n",b_search(t,n,a));
    }
    return 0;
}
