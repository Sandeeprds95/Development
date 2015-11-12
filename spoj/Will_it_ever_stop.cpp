#include<iostream>
#include<cstdio>
using namespace std;

#define s(n)            scanf("%lld",&n);

int main()
{
    unsigned long long n,k=1;
    size_t flag=0;
    s(n);
    while(k<n+1)
    {
        k<<=1;
        if(n==k)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("TAK\n");
    else
        printf("NIE\n");
    return 0;
}
