#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 10;
int n, a[maxn];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);	
    for(int i = n; i >= 0; i--)	
    {
        if(a[i] != a[n])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    return 0;
}
