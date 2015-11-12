//Sherlock and the grid - COOK50
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

#define     s(n)                scanf("%d",&n)
#define     ss(n)               scanf("%s",n)
#define     sc(n)               scanf("%c",&n)
#define     sll(n)              scanf("%lld",&n)
#define     fall(i,a,b)         for(int i=a;i<b;i++)
#define     max(a,b)		((a)>(b)?(a):(b))
#define     min(a,b)		((a)<(b)?(a):(b))
#define	    ll			long long

bool a[1002][1002],xdir[1002][1002],ydir[1002][1002],val;
int main()
{
	int t,n;
	s(t);
	while(t--)
	{
	    char ch;
	    ll c=0;
	    s(n);
	    fall(i,0,n)
	    {
	        getchar();
	        fall(j,0,n)
	        {
	            ch=getchar();
	            if(ch=='#')
                    a[i][j]=true;
                else
                    a[i][j]=false;
	        }
	    }
	    fall(i,0,n)
	    {
	        val=false;
	        for(int j=n-1;j>=0;j--)
            {
                if(a[i][j]==true)
                    val=true;
                xdir[i][j]=val;
            }
	    }
	    fall(i,0,n)
	    {
	        val=false;
	        for(int j=n-1;j>=0;j--)
            {
                if(a[j][i]==true)
                    val=true;
                ydir[j][i]=val;
            }
	    }
	    fall(i,0,n)
	    {
	        fall(j,0,n)
	        {
	            if(xdir[i][j]==false && ydir[i][j]==false)
                    c++;
	        }
	    }
	    printf("%lld\n",c);
	}
return 0;
}
