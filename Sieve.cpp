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

	vector<int> primes(1000001,1);
	gen_sieve(primes);
	for(int i=0;i<prm.size();i++)cout<<prm[i]<<" ";
	
}


