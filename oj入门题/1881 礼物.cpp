#include<bits/stdc++.h>
using namespace std;

const int N=1010;

struct p{
	int p;
	int s;
	int sum;
}e[N];

bool cmp(p x,p y)
{
	return x.sum<y.sum;
}

int main()
{
 	int n,b,res=0,k;
 	cin>>n>>b;
 	for(int i=0;i<n;i++)
 	{
		cin>>e[i].p>>e[i].s;
		e[i].sum=e[i].p+e[i].s;
	}
	sort(e,e+n,cmp);
	for(int i=0;i<n;i++)
	{
		b-=e[i].sum;
		if(b<0)
		{
			k=i+1;
			break;
		}
		res++;
	}
	if(b+e[k].p/2>=0)
		res++;
	cout<<res;
 	return 0;
}
