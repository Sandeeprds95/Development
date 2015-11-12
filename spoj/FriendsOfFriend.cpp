#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,m,n1,id;
    set<int> FOF;
    cin>>n;
    n1=n;
    while(n--)
    {
        cin>>id;
        FOF.insert(id);
        cin>>m;
        while(m--)
        {
            cin>>id;
            FOF.insert(id);
        }
    }
    cout<<FOF.size()-n1;
    return 0;
}
