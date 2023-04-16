#include<bits/stdc++.h>
using namespace std;

int main()
{
 	string a,b;
	cin>>a>>b;
 	int ant=1;
 	for(int i=0;i<4;i++)
 	{
 		if(a[i]!=b[i])
 			ant*=2;
	}
	cout<<ant<<endl;
 	return 0;
}
