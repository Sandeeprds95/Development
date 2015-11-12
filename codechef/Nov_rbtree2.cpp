//Chef and Red Black tree - NOV14
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

int main()
{
    int q;
    s(q);
    ll x,y,qi=0,x1=0,y1=0,lx,ly,a,b;
    string st;
    while(q--)
    {
         cin>>st;
        lx=ly=0;
         x1=y1=1;
         if(st=="Qb" || st=="Qr")
         {
            sll(x);sll(y);
            a=x,b=y;
            while(x>0)
            {
                if(x%2)
                    --x;
                x>>=1,lx++;
            }
            while(y>0)
            {
                if(y%2)
                    --y;
                y>>=1,ly++;
            }
            while(a!=b)
            {
                if(a>b)
                {
                    if(a%2)
                        --a;
                    a>>=1;
                    x1++;
                }
                if(a<b)
                {
                    if(b%2)
                        --b;
                    b>>=1;
                    y1++;
                }
            }
         }
         else
            qi++;

        x1+=y1-1;   //Number of nodes in the path
        //lx and ly denote the level of the 1st and 2nd input

        //For Root as black
        if(qi%2==0 && st!="Qi")
        {
            if(x1%2==0)
                printf("%lld\n", x1/2);
            else
            {
                    if(lx%2 && ly%2)
                    {
                        if(st=="Qb")
                            printf("%lld\n",x1 - x1/2);
                        else
                            printf("%lld\n",x1/2);
                    }//different levels but level is odd - black
                    else
                    {
                        if(st=="Qr")
                            printf("%lld\n",x1 - x1/2);
                        else
                            printf("%lld\n",x1/2);
                    }//different level but level is even - red
            }//if number of nodes are odd (only if level is same or of same manner(even or odd))
        }//even number of times Qi

        //For Root as Red
        if(qi%2!=0 && st!="Qi")
        {
            if(x1%2==0)
                printf("%lld\n", x1/2);
            else
            {
                    if(lx%2 && ly%2)
                    {
                        if(st=="Qr")
                            printf("%lld\n",x1 - x1/2);
                        else
                            printf("%lld\n",x1/2);
                    }//different levels but level is odd - red
                    else
                    {
                        if(st=="Qb")
                            printf("%lld\n",x1 - x1/2);
                        else
                            printf("%lld\n",x1/2);
                    }//different level but level is even - black
            }//if number of nodes are odd (only if level is same or of same manner(even or odd))
        }//Odd number of times Qi
    }//Number OF Queries
return 0;
}// Main
