#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n=100;
 	int sum1=0,sum2=0;
 	string a,b;
 	while(n--)
 	{
 		cin>>a>>b;
 		if(a=="rock"&&b=="scissor")
 			sum1++;
 		if(a=="scissor"&&b=="paper")
 			sum1++;
 		if(a=="paper"&&b=="rock")
 			sum1++;
 		if(b=="rock"&&a=="scissor")
 			sum2++;
 		if(b=="scissor"&&a=="paper")
 			sum2++;
 		if(b=="paper"&&a=="rock")
 			sum2++;
	}
	cout<<sum1<<" "<<sum2<<endl;
 	return 0;
}
