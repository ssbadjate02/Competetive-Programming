#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p,m,r,c;
        cin>>n>>p>>m>>r>>c;
        map<pair<int,int>,pair<char,int>> m;
        ll a;
        char b;
        cin>>b>>a;
        m[{-1,0}] = {b,a};
        cin>>b>>a;
        m[{0,1}] = {b,a};
        cin>>b>>a;
        m[]
    }   
}