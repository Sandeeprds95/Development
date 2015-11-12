#include<iostream>
#include<vector>
#include<cstring>

//#define mod 1000000007
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,m;
        cin>>n;
        m=n;
        vector<long>a(n),b(n);
        long *p=a.data();
        for(int i=0;i<n;i++)
        {
            long x;
            cin>>x;
            *p=x;
            p++;
        }
        if(n>1){
        for(int i=n-1;i>0;i--)
        {
            for(int j=0;j<m-1;j++)
            {
                b[j]=a[j]-a[j+1];
                //cout<<"b["<<j<<"]= "<<b[j]<<endl;
            }
               a=b;
               m--;

        }
        cout<<a[0]<<endl;
        }
        else
            cout<<a[0]<<endl;

    }
    return 0;
}
