#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[4];
    while(cin>>s) 
	{
        int ans = 0;
        for(int i = 0; i < strlen(s); i++) 
		{
            ans *= 26;
            ans += s[i] - 'A' + 1;
        }
        cout<<ans<<endl;
	}
 	return 0;
}
