#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     fall(i,n)           for(int i=0;i<n;i++)

int main()
{
    int NoA,NoD;
    s(NoA);s(NoD);
    int Amin,Dmin,Dmin2;
    while(NoA && NoD)
    {
        int a[NoA],d[NoD];
        Dmin2=10000,Dmin=10000;
        fall(i,NoA)
            s(a[i]);
        fall(i,NoD)
            s(d[i]);

        Amin=*min_element(a,a+NoA);
        Dmin=*min_element(d,d+NoD);

        fall(i,NoD)
        {
            if(d[i]==Dmin)
            {
                d[i]=10000;
                break;
            }
        }

        fall(i,NoD)
        {
            if(d[i]<=Dmin2)
            {
                Dmin2=d[i];
            }
        }

        if(Amin<Dmin2)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

        s(NoA);s(NoD);
    }
    return 0;
}
