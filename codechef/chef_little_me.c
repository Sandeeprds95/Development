#include<stdio.h>
#include<string.h>

#define w(t) while(t--)
#define m(a,b,c) memset(a,0,sizeof(c))
#define forn(n) for(i=0;i<n;i++)

int main()
{
    int t,n,k,i;
    long a[4],ans;
    scanf("%d",&t);
    w(t)
    {
        scanf("%d",&n);
        m(a,0,a);
        forn(n)
        {
                scanf("%d",&k);
                if(k<=2)
                    a[k]++;
                else
                    a[3]++;
        }
        ans=((a[2]*a[3])+(a[3]*(a[3]-1)/2));
        printf("%ld\n",ans);
    }
    return 0;
}
