#include <iostream>
#include <string>
using namespace std;
int a[10][5];
int main()
{
	string s1,s2;
	long long b,c,d,t,i,j;
	for(i=0;i<=4;i++)
	{
		a[0][i]=0;
		a[1][i]=1;
		a[5][i]=5;
		a[6][i]=6;
	}
	a[2][0]=6;
	a[2][1]=2;
	a[2][2]=4;
	a[2][3]=8;
	a[3][0]=1;
	a[3][1]=3;
	a[3][2]=9;
	a[3][3]=7;
	a[4][0]=6;
	a[4][1]=4;
	a[7][0]=1;
	a[7][1]=7;
	a[7][2]=9;
	a[7][3]=3;
	a[8][0]=6;
	a[8][1]=8;
	a[8][2]=4;
	a[8][3]=2;
	a[9][0]=1;
	a[9][1]=9;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>s1>>c;
		b=s1[s1.size()-1]-'0';
		if(b==0)
			cout<<"0"<<endl;
		else
			if(c==0)
				cout<<"1"<<endl;
			else
				cout<<a[b%10][c%4]<<endl;
	}
	return 0;
}
