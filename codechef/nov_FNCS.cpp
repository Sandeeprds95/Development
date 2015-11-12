#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<iomanip>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		    ((a)>(b)?(a):(b))
#define     min(a,b)		    ((a)<(b)?(a):(b))
#define	    ll			        long long

void updateFn(ll f[][2],ll fn[],int x,ll y,int n,ll a[])
{
    for(int i=0;i<n;i++)
    {
       ll j=f[i][0],k=f[i][1];
       j--;
       // printf("j: %lld and k = %lld and x-1 = %d and a[x-1]= %lld\n",j,k,x-1,a[x-1]);
        if(j<= x-1 && k> x-1)
            fn[i]+=y-a[x-1];
    }
}

void updateA(ll a[],int x,ll y,int n)
{
    fall(i,0,n)
        if(i==x-1)
            a[i]=y;
}

int main()
{
    int n;
    s(n);
    ll f[n][2],fn[n];
    memset(fn,0,sizeof(fn));
    ll a[n];
    fall(i,0,n)
        sll(a[i]);
    //fall(i,0,n)
      //  printf("%lld ",a[i]);
    //printf("\n");
    fall(i,0,n)
    {
        sll(f[i][0]);sll(f[i][1]);
        ll j=f[i][0],k=f[i][1];
        j--;
        //printf("\nj: %d and k: %d\n",j,k);
        while(j<k)
            fn[i]+=a[j],j++;
    }
    //fall(i,0,n)
      //  printf("%lld ",fn[i]);
    //printf("\n");
    int q;
    s(q);
    while(q--)
    {
        int state,x;
        ll y;
        s(state);
        if(state==1)
        {
            s(x);sll(y);

            updateFn(f,fn,x,y,n,a);

	//		printf("updated fn:\n");
           // fall(i,0,n)
            //    printf("%lld ",fn[i]);
          //  printf("\n");

            updateA(a,x,y,n);

           // printf("updated a:\n");
           // fall(i,0,n)
             //   printf("%lld ",a[i]);
           // printf("\n");

        }
        else
        {
            int m,n;
            ll ans=0;
            s(m);s(n);
            for(long long i=m-1;i<n;i++)
                ans+=fn[i];
            printf("%lld\n",ans);
        }
    }
return 0;
}
