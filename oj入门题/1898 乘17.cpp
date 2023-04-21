#include<bits/stdc++.h>
using namespace std;

vector<int> add(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    for (int i = 0, t = 0; i < A.size() || i < B.size() || t; i ++ )
    {
        if (i < A.size()) t += A[i];
        if (i < B.size()) t += B[i];
        C.push_back(t % 2);
        t /= 2;
    }
    
    return C;
}

int main()
{
    string a, b;
    cin >> a;
    
    if (a == "0")
    {
        puts("0");
        return 0;
    }
    
    b = a + "0000";
    
    vector<int> A, B;
    for (int i = a.size() - 1; i >= 0; i -- ) A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i -- ) B.push_back(b[i] - '0');
    
    
    auto C = add(A, B);
    
    for (int i = C.size() - 1; i >= 0; i -- )
        cout << C[i];
        
    return 0;
}
