#include<bits/stdc++.h>
using namespace std;
int BE(int a,int b)
{
	int res=1;
	while(b)
	{
		if(b&1)
		{
			b=b-1;
			res*=a;
		}
		else
		{
			b=b/2;
			a*=a;
		}
	}
	return res;
}
int inv(int b,int m)
{
	return BE(b,m);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<BE(a,b)<<"   ";
	int m=1e9+7;
	cout<<inv(b,m-2);
}
