#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int sum=0,n,cntr=0,j=2,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<3)
            cout<<1<<endl;
        else if(n<6)
            cout<<2<<endl;
        else if(n<10)
            cout<<3<<endl;
        else if(n<15)
            cout<<4<<endl;
        else if(n<21)
            cout<<5<<endl;
        else if(n<28)
            cout<<6<<endl;
        else if(n<36)
            cout<<7<<endl;
        else if(n<45)
            cout<<8<<endl;
        else if(n<55)
            cout<<9<<endl;
        else
            cout<<10<<endl;
        //for(int i=0;i<=n;i++)
        //{

    }
    return 0;
}

