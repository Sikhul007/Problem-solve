// https://codeforces.com/contest/1547/problem/A

#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        ll ans=abs(x1-x2)+abs(y1-y2);
        if(y1==y2 && y1==y3)
        {
            //cout<<"col"<<endl;
            if(x3>=min(x1,x2) && x3<=max(x1,x2))ans+=2;
        }
        else if(x1==x2 && x1==x3)
        {
            //cout<<"row"<<endl;
            if(y3>=min(y1,y2) && y3<=max(y1,y2))ans+=2;
        }
        cout<<ans<<endl;
    }
}
