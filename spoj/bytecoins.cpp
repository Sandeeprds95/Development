#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map<int,long long>mem;
long long c(long long n)
{
    if(n==0)
        return 0;
	if(mem[n]!=0)
        return mem[n];
	else
	{
        mem[n]=max(n,c(n/2) + c(n/3) + c(n/4));
		return mem[n];
    }
}

int main()
{
    long long n;
    int i=0;
    while(i<10)
    {
        scanf("%lld",&n);
        printf("%lld\n",c(n));
        i++;
    }
    return 0;
}
