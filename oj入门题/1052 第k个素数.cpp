#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int n;

bool is_prime(int n)
{
    if(n<2)  return false;
    for(int i=2;i<=n/i;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
	int sum[N],k,res=0;
	for(int i=1;res<10010;i++)
		if(is_prime(i))
			sum[res++]=i;
	while(cin>>k)
		cout<<sum[k-1]<<endl;
	return 0;	
}