#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int ant=0;
 	for(int i=-10;i<=10;i++)
 	{
 		for(int j=-10;j<=10;j++)
 		{
 			if((pow(i,2)+pow(j,2))<=100)
 				ant++;
		}
	}
	cout<<ant;
 	return 0;
}
