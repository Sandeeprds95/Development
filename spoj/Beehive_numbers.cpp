#include<iostream>
#include<map>
#include<cstdio>
using namespace std;

#define     s(n)        scanf("%lld",&n)

map<long long,bool> arr;

int main()
{
    arr[1]=true;
    long long b=1,c=1,n;
    while(b<1000000001)
    {
        b+=(c*6);
        c++;
        arr[b]=true;
    }
    s(n);
    while(n!=-1)
    {
        if(arr[n])
            printf("Y\n");
        else
            printf("N\n");
        s(n);
    }
    return 0;
}
