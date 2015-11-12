#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long x,y,x1,x2,y1,y2,min=0;
    int t;
    cin>>t;
    while(t<100001&&t>0)
    {
        cin>>x>>y>>x1>>y1>>x2>>y2;

        if(x>=x1 && x1<=x2 && y>=y1 && y1<=y2)
        {
                    min=abs(x-x1);
                    if(abs(x-x2)<min)
                        min=abs(x-x2);
                    if(abs(y-y1)<min)
                        min=abs(y-y1);
                    if(abs(y-y2)<min)
                        min=abs(y-y2);
            cout<<min<<endl;
        }
        else
            cout<<0<<endl;
    t--;
    }
    return 0;
}
