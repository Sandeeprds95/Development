#include<iostream>
using namespace std;
int main()
{
    int t,x,y; cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==y)
           (x%2==0)?(cout<<x+y<<endl):(cout<<x+y-1<<endl);
        else if(x-y==2)
            (x%2==0)?(cout<<x+y<<endl):(cout<<x+y-1<<endl);
        else
            cout<<"No Number"<<endl;
    }
    return 0;
}
