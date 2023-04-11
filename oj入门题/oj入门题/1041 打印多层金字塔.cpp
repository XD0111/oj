#include<bits/stdc++.h>
using namespace std;

void cout1(int i)
{
	while(i--)
 		cout<<" ";
}

void cout2(int i)
{
	while(i--)
		cout<<"*";
}

int main()
{
	int m,n,i,j,i1;
	cin>>m>>n;                             
	for(i = 1;i<=n*m;i++)
	{                    
  		j = (i-1)/n;                               
  		i1 = i%n;
  		i1 = i1==0?n:i1;                            
  		cout1(m*n-i); 
        for(int j1 = 1;j1<2*(j+1);j1++)
		{         
         	if(j1%2!=0) 
				cout2(2*i1-1);           
        	else 
				cout1(2*n-i1*2+1);            
  		}
  		cout<<endl;
 	}
 	return 0;
} 
