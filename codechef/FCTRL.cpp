#include<iostream>
using namespace std;
int main()
{
    long int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n)
        {
            sum+=n/5;
            n/=5;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
