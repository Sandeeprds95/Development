#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long a[n],b[n],mini[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
            mini[i]=abs(a[i]-b[i]);

        sort(mini,mini+n);
        cout<<mini[n-1]<<endl;
    }
    return 0;
}
