#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,temp,m,k,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        k=-1;
        long a[n],b[m],mini[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];

            sort(a,a+n);
            sort(b,b+m);
            cout<<a[0]<<a[1]<<a[2]<<endl;
            cout<<b[0]<<b[1]<<b[2]<<b[3]<<endl;
            for(int i=0;i<n;i++)
            {
                mini[i]=0;
                for(int j=i;j<m;j++)
                {
                        k=abs(a[i]-b[j]);
                    if(k<mini[i])
                    {
                        mini[i]=k;
                        r=j;
                    }
                    cout<<mini[i]<<" ";
                }
                cout<<endl;
                b[r]=-1000;
                sort(b,b+m);
            }
        sort(mini,mini+n);
        cout<<mini[n-1]<<endl;
    }
    return 0;
}
