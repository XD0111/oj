#include<bits/stdc++.h>
using namespace std;

int main()
{
	double num;
	while(cin>>num)
	{
		num=round(num*100+0.05)/100.0;
		printf("%.2f\n",num);
	}
 	return 0;
}
