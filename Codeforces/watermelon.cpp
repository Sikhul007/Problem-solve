//problem link: https://codeforces.com/problemset/problem/4/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num%2==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        if(num==2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;

}
