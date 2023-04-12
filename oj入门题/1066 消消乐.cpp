#include<bits/stdc++.h>
using namespace std;

string s;
int flag=1;

string cut(string s)
{
    flag=0;
    int r=0;
    for(int i=1;i<s.size();i++) 
	{
        if(s[i]==s[i-1]) 
			r++;
        else 
			r=0;
        if(r==2) 
		{
            flag=1;
            s=s.substr(0,i-2)+s.substr(i+1);
            return s;
            break;
        }
    }
    return s; 
}

int main()
{
    cin>>s;
    while(flag)
        s = cut(s);
    cout<<s.size()<<endl<<s;
    return 0;
}
