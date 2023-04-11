#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L,R,x,ans = 0;
    cin>>L>>R>>x;
    for(int i=L; i<=R;++i) 
	{
        int j=i;
        while(j) 
		{
            if(j%10==x) 
				ans++;
            j/=10;
        }
    }
    cout<<ans;
    return 0;
}
