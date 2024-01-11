#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>prm;
void gen_sieve(vector<int>&primes)
{
    primes[0]=0;
    primes[1]=0;
    int n=100000+1;
    for(int i=2;i*i<=n;i++)
    {
        if(primes[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
    	if(primes[i]==1) prm.push_back(i);
	}
}
int main() {
	ll t;
	cin>>t;
	vector<int> primes(1000001,1);
	gen_sieve(primes);
	while(t--)
	{
	    ll l,r;
	    cin>>l>>r;
	    ll d=r-l;
	    vector<int> segsieve(d+1,1);
	    ll sq=sqrtl(l);
	    for(int i=0;prm[i]<=sq;i++)
	    {
	    	ll fm=(l/prm[i])*prm[i];
	    	if(fm<l) fm+=prm[i];
	    	for(int k=fm;k<=r;k+=prm[i])
	    	{
	    		segsieve[k-l]=0;
			}
			
		}
		for(int i=0;i<=d;i++)
		{
			if(segsieve[i]==1)cout<<l+i<<" ";
		}
	}
}


