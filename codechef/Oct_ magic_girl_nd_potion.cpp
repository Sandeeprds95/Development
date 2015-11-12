#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,r,g,b,m, mx[3];
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>m;
        long long int rm,gm,bm,rp[r],gp[g],bp[b];
        for(int i=0;i<r;i++)
            cin>>rp[i];
        for(int i=0;i<g;i++)
            cin>>gp[i];
        for(int i=0;i<b;i++)
            cin>>bp[i];
        rm=*max_element(rp,rp+r);
        gm=*max_element(gp,gp+g);
        bm=*max_element(bp,bp+b);
        while(m--)
        {
            if(rm>=gm&&rm>=bm)
                for(int i=0;i<r;i++)
                    rp[i]/=2;
            else if(gm>=rm&&gm>=bm)
                for(int i=0;i<g;i++)
                    gp[i]/=2;
            else
                for(int i=0;i<b;i++)
                    bp[i]/=2;
            rm=*max_element(rp,rp+r);
            gm=*max_element(gp,gp+g);
            bm=*max_element(bp,bp+b);
            mx[0]=rm;
            mx[1]=gm;
            mx[2]=bm;
        }
        cout<<*max_element(mx,mx+3)<<endl;
    }
    return 0;
    }
