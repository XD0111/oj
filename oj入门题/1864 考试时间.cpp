#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int d,h,m;
 	cin>>d>>h>>m;
 	int ant=(d-11)*1440+(h-11)*60+m-11;
	if(ant<0)
		cout<<"-1";
	else
		cout<<ant;
 	return 0;
}
