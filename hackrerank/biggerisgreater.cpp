// lexicographically smallest word
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string w;
    while(t--)
    {
        cin>>w;
        if(next_permutation(w.begin(),w.end()))
            cout<<w<<endl;
        else
            cout<<"no answer\n";
    }
    return 0;
}
