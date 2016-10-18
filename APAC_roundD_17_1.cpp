#include<bits/stdc++.h>
using namespace std;
double arr[2001][2001];
int main()
{
	
	for(int i=1;i<2000;i++)
	arr[i][0]=1;
	for(int i=1;i<2000;i++)
	{
		for(int j=1;j<2000;j++)
		{
			if(i>j)
			{
				double a=(double)i/(i+j);
				double b=1-a;
				arr[i][j]=arr[i-1][j]*a +arr[i][j-1]*b;
			}
			
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int m, n;
		cin>>m>>n;
		printf("Case #%d: %.8f\n", t, arr[m][n] );
	}
}
