#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void ans(ll n)
{
    cout<<n<<" ";
    if(n==1)return;
    if(n%2==0)
    {
        n/=2;
    }
    else
    {
        n=n*3;
        n++;
    }
    ans(n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll N=(n*(n+1))/2;
    ll sum=0;
    n--;
    int x;
    while(n--)
    {
        cin>>x;
        sum+=x;
    }
    cout<<N-sum;
}
