#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n),a;
        for(ll i=0;i<n;i++) cin>>v[i];
        a=v;
        sort(v.begin(),v.end());
        if(a==v) cout<<"0\n";
        else if(a[0]==1 || a[n-1]==n) cout<<"1\n";
        else if(a[0]==n && a[n-1]==1) cout<<"3\n";
        else cout<<"2\n";
    }   
}