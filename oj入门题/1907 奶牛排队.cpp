#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, m;
int a[N], b[N];

int main()
{
    
    cin >> n;
    unordered_set<int> S;
    for(int i = 0; i < n; i++) 
		cin >> a[i], S.insert(a[i]);
    
    int res = 0;
    for(int x: S)
	{
        m = 0;
        for(int i = 0; i < n; i++)
            if(a[i] != x) 
                b[m++] = a[i];
        
        for(int i = 0; i < m; i++)
		{
            int j = i + 1;
            while(j < m && b[j] == b[i]) 
				j++;
            res = max(res, j - i);
            i = j - 1;
        }
    }
    
    cout << res << endl;
    
    return 0;
}
