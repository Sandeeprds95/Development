#include<iostream>
using namespace std;
int main()
{
    int t;
    long long n,sum,a;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=(a%n);
        }
        if(!(sum%n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
