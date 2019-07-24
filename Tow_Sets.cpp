#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define pf(n) printf("%lld\n",n)
#define sf(n) cin>>n
#define in(n) for(int i=1;i<=n;i++)
#define vi vector<ll>
#define vp vector<pair<int,int> >
#define graph vector< vector<int>  >
#define vs vector<string>
#define sort(a) sort(a.begin(),a.end())
#define MOD 1000000007
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    sf(n);
    set<int> o,e;
    for(int i=1;i<=n;i+=2)
    {
        o.insert(i);
    }
    for(int i=2;i<=n;i+=2)
    {
        e.insert(i);
    }
    ll N=(n*(n+1))/2;
    ll t=(n/2);if(n%2!=0)t++;
    //cout<<"t "<<t<<endl;
    ll odd=t*t;
    ll even=N-odd;
 
    if(N%2!=0)
    {
        cout<<"NO\n";
        return 0;
    }
    if(odd>even)
    {
 
        ll dis;
        e.insert(1);
        e.insert(n);
        even+=(1+n);
        dis=even-(N/2);
        o.erase(1);
        o.erase(n);
        if(dis%2==0){
        e.erase(dis);
        o.insert(dis);
        }
        else
        {
            e.erase(1);
            o.insert(1);
            e.erase(dis-1);
            o.insert(dis-1);
        }
        cout<<"YES\n";
        cout<<o.size()<<endl;
        for(auto it:o)
        {
            cout<<it<<" ";
        }
        cout<<endl<<e.size()<<endl;
        for(auto it:e)
        {
            cout<<it<<" ";
        }
        return 0;
    }
    else
 
    {
 
        ll dis=(n+1)/2;
        o.insert(n);
        odd+=(n);
        dis=odd-(N/2);
        //cout<<"sid "<<dis<<endl;
        e.erase(n);
        if(dis%2!=0){
        o.erase(dis);
        //o.erase(1);
        e.insert(dis);
        //e.insert(1);
        }
        else
        {
            o.erase(dis-1);
            o.erase(1);
            e.insert(dis-1);
            e.insert(1);
        }
        cout<<"YES\n";
        cout<<o.size()<<endl;
        for(auto it:o)
        {
            cout<<it<<" ";
        }
        cout<<endl<<e.size()<<endl;
        for(auto it:e)
        {
            cout<<it<<" ";
        }
        return 0;
    }
}
