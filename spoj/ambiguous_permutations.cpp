#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    while(n)
    {
        long a[n],Ia[n];
        short f=0;
        for(int i=0;i<n;i++)
            cin>>a[i],Ia[a[i]-1]=i+1;
        for(int i=0;i<n;i++)
            if(Ia[i]!=a[i])
            {
                cout<<"not ambiguous"<<endl;
                f=1;
                break;
            }

        if(!f)
            cout<<"ambiguous"<<endl;
        cin>>n;
    }
    return 0;
}
