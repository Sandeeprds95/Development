#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define s(n)    scanf("%d",&n)

int main()
{
    int t,req,frnds;
    size_t c=0,r;
    long sum;
    s(t);
    while(t--)
    {
        s(req);
        s(frnds);
        sum=0,c++,r=0;
        int *a=new int[frnds];
        for(int i=0;i<frnds;i++)
            s(a[i]);
        sort(a,a+frnds,greater<int>());
        for(int i=0;i<frnds;i++)
        {
            sum+=a[i];
            r++;
            if(sum>=req)
            {
                printf("Scenario #%d:\n%d\n",c,r);
                break;
            }
        }
        if(sum<req)
            printf("Scenario #%d:\nimpossible\n",c);
    }
    return 0;
}
