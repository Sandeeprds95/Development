#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

#define     s(n)          scanf("%d",&n)
#define     sll(n)        scanf("%lld",&n)

int main()
{
	int t,n;
	s(t);
	while(t--)
    {
        s(n);
        int a[n];
        for(int i=0;i<n;i++)
            s(a[i]);
        int ans=0;
        sort(a,a+n);
        for(int i=1;i<n;i++)
            ans+=a[i]-a[0];
        printf("%d\n",ans);
    }
    return 0;
}
