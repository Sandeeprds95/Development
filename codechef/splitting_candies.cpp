#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k)
            cout<<n/k<<" "<<n%k<<endl;
        else
            cout<<k<<" "<<n<<endl;
    }
    return 0;
}
