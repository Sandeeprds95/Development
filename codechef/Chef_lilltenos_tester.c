#include<stdio.h>
#include<string.h>
//using namespsace std;

#define CLR(a) memset(a, 0, sizeof(a))
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
typedef long long int LL;
int main()
{
	int T, ks;
	int n, a, i;
	LL ans, cnt[4];

	scanf("%d", &T);
	FORAB(ks, 1, T)
	{
		scanf("%d", &n);
		CLR(cnt);

		FORN(i, n)
		{
			scanf("%d", &a);
			if(a <= 2) cnt[a]++;
			else cnt[3]++;
		}
		ans = (cnt[3] * (cnt[3] - 1)) / 2 + cnt[2] * cnt[3];
		printf("%lld\n", ans);
	}

	return 0;
}

