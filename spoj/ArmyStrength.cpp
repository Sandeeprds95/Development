#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define s(n)              scanf("%d",&n)
#define fall(i,a,b)       for(int i=a;i<b;i++)

int main()
{
    int t,ng,nm;
    s(t);
    printf("\n");
    while(t--)
    {
        s(ng);s(nm);
        int *g=new int[ng];
        int *m=new int[nm];
        fall(i,0,ng)
            s(g[i]);
        fall(i,0,nm)
            s(m[i]);
        sort(g,g+ng);
        sort(m,m+nm);
        if(g[ng-1]>=m[nm-1])
            printf("Godzilla\n\n");
        else
            printf("MechaGodzilla\n\n");
    }
    return 0;
}
