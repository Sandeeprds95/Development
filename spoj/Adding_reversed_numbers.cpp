#include<iostream>
using namespace std;

int rev=0;

int rd(int num)
{
    if(num>0)
    {
        rev=rev*10+(num%10);
        rd(num/10);
    }
    return rev;
}
int main()
{
    int x,y,n;
    cin>>n;
    while(n--)
    {
            cin>>x>>y;
            x=rd(x);
            rev=0;
            y=rd(y);
            rev=0;
            x+=y;
            cout<<rd(x)<<endl;
            rev=0;
    }
    return 0;
}
