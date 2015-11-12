#include<iostream>
using namespace std;
int main()
{
    long n,m,a,b,k,sum=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>k;
        sum+=(b-a+1)*k;
    }
    cout<<sum/n;
    return 0;
}
