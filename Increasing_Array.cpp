#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll c=0;
    for(int i=1;i<n;i++)
    {
        //cout<<(a[i-1]-a[i])<<" ";
        if(a[i]<a[i-1])
        {
            c+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    /*for(int i=0;i<n;i++)
    {
        //cout<<(a[i-1]-a[i])<<" ";
        cout<<a[i]<<" ";
    }*/
 
    cout<<c;
}
