#include<iostream>
using namespace std;
int main()
{
    int t;
    long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n-n%2<<endl;
    }
    return 0;
}
