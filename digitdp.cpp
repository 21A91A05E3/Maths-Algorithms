#include<bits/stdc++.h>
using namespace std;
int d,k;
vector<int>nums;
int fun(int pos,int c,int flg)
{
    if(c>k)return 0;
    if(pos==nums.size())
    {
        if(c==k)return 1;
        return 0;
    }
    int lim,nc,nflg;
    if(flg==0) lim=nums[pos];
    else lim=9;
    int res=0;
    for(int i=0;i<=lim;i++)
    {
          nc=c;
          nflg=flg;
          if(flg==0 and i<nums[pos])nflg=1;
         
          if(i==d)nc+=1;
         res+= fun(pos+1,nc,nflg);
          
    }
    return res;
}
int find(int n)
{
    nums.clear();
    while(n)
    {
        nums.push_back(n%10);
        n=n/10;
    }
    reverse(nums.begin(),nums.end());
    
    int res=fun(0,0,0);
    return res;
}
int main()
{
   int a,b;
   cin>>a>>b>>d>>k;
   // cout<<a<<b<<d<<k;
   int ans1=find(a-1);
   int ans2=find(b);
   cout<<ans2<<"   "<<ans1<<"\n";
   cout<<ans2-ans1;
}
