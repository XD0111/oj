#include<bits/stdc++.h>
using namespace std;

int a[100];

int fac(int n, int k)
{
    for(int i=4;i<= n; ++i)
	{
        if(i > k)
            a[i] = a[i - 1] + a[i - k];
        else if(i == k)
            a[i] = a[i - 1] + 1;
        else
            a[i] = a[i - 1];
    }
 
}
int main()
{
    int n, k;
    cin>>n>>k;
    if(n == k) 
		cout<<2;
    if(n == 2 && k >= 3) 
		cout<<1;
    if(n == 3 && k == 2) 
		cout<<3;
    if(n >= 4 && n != k) 
	{
        a[1] = 1; a[2] = 1 + 2 / k;
        if(k >= 4) a[3] = 1;
        if(k < 4) a[3] = 1 + 4 / k;
        fac(n, k);
        cout<<a[n];
    }
    return 0;
