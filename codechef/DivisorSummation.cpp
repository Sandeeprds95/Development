#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define     sl(n)           scanf("%ld",&n)
#define     fall(i,a,b)       for(int i=a;i>b;i--)

int main()
{
    long t,n;
    long long sum;
    sl(t);
    while(t--)
    {
        sl(n);
        int f=0;
        sum=1;
        fall(i,sqrt(n),1)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    sum+=i;
                else
                    sum+=n/i+i;
            }
        }
        if(n==1)
            printf("0\n");
        else
            printf("%lld\n",sum);
    }
    return 0;
}
