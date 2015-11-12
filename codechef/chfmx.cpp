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

int main()
{
	int t;
	s(t);
	string st;
	while(t--)
    {
        int a[26]={},c=0;
        char ch;
        cin>>st;
        fall(i,0,st.size())
            a[st[i]-'a']++;
        fall(i,0,26)
            if(a[i]>c)
                c=a[i],ch=i+'a';
        fall(i,0,st.size())
        {
            if(st[i] != ch)
                printf("%c",st[i]);
            else
                printf("?");
        }
        printf("\n");
    }
return 0;
}
