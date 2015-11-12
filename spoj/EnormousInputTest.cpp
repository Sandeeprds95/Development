#include<iostream>
using namespace std;
int main()
{
    long n,k,c=0;
    cin>>n>>k;
    long t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
