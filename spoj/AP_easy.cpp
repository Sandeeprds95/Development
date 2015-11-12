#include<iostream>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        long long n,m,sum,NoT,d;
        cin>>n>>m>>sum;
        NoT=(2*sum)/(n+m);
        d=(m-n)/(NoT-5);
        cout<<NoT<<endl;
        for(int i=(n-(2*d)),j=0;j<NoT;j++,i+=d)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
