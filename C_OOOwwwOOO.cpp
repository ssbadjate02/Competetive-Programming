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
        ll n,f=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2)
        {
            cout<<"YES\n";
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(s2[i]=='o')
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }   
}