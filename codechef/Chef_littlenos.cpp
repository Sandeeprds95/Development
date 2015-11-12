#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,k;
    long a[4],ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
                cin>>k;
                if(k<=2)
                    a[k]++;
                else
                    a[3]++;
        }
        ans=((a[2]*a[3])+(a[3]*(a[3]-1)/2));
        cout<<ans<<endl;
    }
    return 0;
}
