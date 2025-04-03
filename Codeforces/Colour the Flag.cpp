// problem link: https://codeforces.com/contest/1534/problem/A

#include <bits/stdc++.h>
using namespace std;

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

bool first(vector<string> a)
{
    ll n=a.size();
    ll m=a[0].length();
    ll i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!='.')
            {
                if((i+j)%2==0 && a[i][j]!='R')
                    return false;
                else if((i+j)%2==1 && a[i][j]!='W')
                    return false;
            }
        }
    }
    return true;
}
bool second(vector<string> a)
{
    ll n=a.size();
    ll m=a[0].length();
    ll i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!='.')
            {
                if((i+j)%2==0 && a[i][j]!='W')
                    return false;
                else if((i+j)%2==1 && a[i][j]!='R')
                    return false;
            }
        }
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n,m;
        cin>>n>>m;
        vector<string> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        if(first(a))
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                        cout<<'R';
                    else
                        cout<<'W';
                }
                cout<<endl;
            }
        }
        else if(second(a))
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((i+j)%2==0)
                        cout<<'W';
                    else
                        cout<<'R';
                }
                cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}


