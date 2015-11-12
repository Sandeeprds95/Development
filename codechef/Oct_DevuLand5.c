#include<math.h>
#include<stdio.h>
#ifndef max
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

int main()
{
    long t,n,gu,i,j;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        long d[n];
        for(i=0;i<n;i++)
            scanf("%ld",&d[i]);
        i=0,j=1;
        gu=0;
        i=0,j=0;
        int k=0;
        while(1)
        {
            while(i<n && d[i]>=0)
                i++;
            while(j<n && d[j]<=0)
                j++;
            if(i==n || j==n)
                break;
            k=min(d[j],-d[i]);
            gu=gu+(abs(j-i)*k);
            d[i]+=k;
            d[j]-=k;
        }
        printf("%ld\n",gu);
    }
    return 0;
}

