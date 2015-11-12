#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,t,m,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        c=0;
        int a[m],b[n],k=0;
        memset(b,0,sizeof(b));
        for(int i=0;i<m;i++)
            cin>>a[i];
        sort(a,a+m);
        for(int i=m-1;i>=0;i--)
        {
                for(int j=a[i];j<=n;j+=a[i])
                {
                    if(j%a[i]==0)
                        b[j]++;
                }
        }
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        for(int i=0;i<n;i++)
        {
            if(b[i]==m)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
