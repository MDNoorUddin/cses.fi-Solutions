#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define ps() cout<<" ";

/**  '' "\n" ^ **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<ll> a(n+1);
    vector<ll> b(n+1);
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]+=(a[i]+b[i-1]);
    }
    int x,y;
    while(q--)
    {
        cin>>x>>y;
        cout<<b[y]-b[x-1]<<endl;
    }
}
