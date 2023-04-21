#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,x;
        cin>>n>>x;
        int length=n/2;
        for(int i=x-length;i<=x-1;i++)
            cout<<i<<" ";
        if(n&1)
			cout<<x<<" ";
        for(int i=x+1;i<=x+length;i++)
            cout<<i<<" ";
    }
    return 0;
}
