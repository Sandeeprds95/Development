#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,m,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        sum=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if((sum+m)%n)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
