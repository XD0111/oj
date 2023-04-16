#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> PII;

const int N=1e6+10,mod=1e9+7;
int n,a[N];

int main()
{
    cin>>n;
    ll ans=1e18,ans1=0,sum=0;
    for(int i=1;i<=n;i++) 
	{
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=1;i<=n;i++)
	{
        ans1+=a[i];
        ans=min(ans,max(ans1,sum-ans1));
    }
    cout<<ans<<endl;
    return 0;
}
