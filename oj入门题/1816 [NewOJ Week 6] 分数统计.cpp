#include<bits/stdc++.h>
using namespace std;

const int maxn=1e5+10;
int score[maxn];

int main()
{
    int n,k;
    cin>>n>> k;
    for(int i=0;i<k;i++)
        cin>>score[i];
    while(n--)
    {
        string s;
        cin >> s;
        long long ans=0;
        for(int i=0;i<k;i++)
			if(s[i]=='1')
            	ans+=score[i];
        cout<<ans<<endl;
    }
    return 0;
}
