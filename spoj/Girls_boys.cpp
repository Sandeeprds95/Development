#include<iostream>
#include<cstdio>
using namespace std;

#define s(n)            scanf("%d",&n)
#define max(a,b)        ((a>b) ? (a) : (b))
#define min(a,b)        ((a<b) ? (a) : (b))

int main()
{
    int g,b,ma,mi;
    s(g);s(b);
    while(g>-1 && b>-1)
    {
        ma=max(g,b);
        mi=min(g,b);
        if(ma%(mi+1))
            printf("%d\n",(ma/(mi+1))+1);
        else
            printf("%d\n",(ma/(mi+1)));
    s(g);s(b);
    }
    return 0;
}
