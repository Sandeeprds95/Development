#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long unsigned n,sum;
        cin>>n;
        sum=(n*(n+2)*(2*n+1))/8;
        cout<<sum<<endl;
    }
    return 0;
}
