// https://codeforces.com/contest/1546/problem/A

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
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=1;i<=n;i++)cin>>ar[i];
        
        int br[n+3];
        for(int i=1;i<=n;i++)cin>>br[i];
        
        vector<int>barbe,kombe;
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
            if(br[i]>ar[i])
            {
                int x=br[i]-ar[i];
                for(int j=1;j<=x;j++)barbe.push_back(i);
                sum1+=x;
            }
            else if(br[i]<ar[i])
            {
                int x=ar[i]-br[i];
                 for(int j=1;j<=x;j++)kombe.push_back(i);
                sum2+=x;
            }
        }
        if(sum1!=sum2)cout<<-1<<endl;
        else if(sum1==0)cout<<0<<endl;
        else{
            cout<<sum1<<nl;
            for(int i=0;i<barbe.size();i++)
            {
                cout<<kombe[i]<<" "<<barbe[i]<<nl;
            }
        }

    }
}


















