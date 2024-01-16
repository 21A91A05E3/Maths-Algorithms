#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<long long int>v;
	v.push_back(1);
	long long int s;
	for(long long int num=1;num<=n;num++)
	{

		s=v.size();
		long long int i=0,d,c=0;
		long long int p;
		while(s--)
		{
			p=((1LL*v[i])*(1LL*num))+c;
			d=p%10;
			v[i]=d;
			c=p/10;
			i+=1;
		}
		if(c!=0)v.push_back(c);
		
	}
	for(long long int i=v.size()-1;i>=0;i--){
		cout<<v[i]<<" ";
	}
}
