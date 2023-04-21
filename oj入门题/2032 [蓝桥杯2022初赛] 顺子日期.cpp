#include<bits/stdc++.h>
using namespace std;

int date1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};   
int main()
{
    int b[8];                           
    b[0] = 2;
    b[1] = 0;        
    b[2] = 2;
    b[3] = 2;
    int sum = 0;
    for (int i = 1; i <= 12; i++)        
    {
        b[4] = i / 10;                
        b[5] = i % 10;               
        for (int j = 1; j <= date1[i]; j++)  
        {
            b[6] = j / 10;              
            b[7] = j % 10;              
            if ((b[4] + 1 == b[5] && b[5] + 1 == b[6]) || (b[5] + 1 == b[6] && b[6] + 1 == b[7])) 
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
