#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int top=int(ceil(-0.5+sqrt(1+(n<<3))/2));
        int u=(top*(top+1))>>1;
        if(top&1)
            cout<<"TERM "<<n<<" IS "<<1 + u - n<<"/"<<n - u + top<<endl;
        else
            cout<<"TERM "<<n<<" IS "<<n-u+top<<"/"<<1+u-n<<endl;
    }
    return 0;
}
