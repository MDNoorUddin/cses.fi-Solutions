#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ **/

int n,m;

vector<ll> a(21);
ll mn=999999999999999;
void ans(int i,ll l,ll r)
{
    if(i==n)
    {
        if(abs(l-r)<mn)
        {
            mn=abs(l-r);
        }
        return;
    }
    ans(i+1,l+a[i],r);
    ans(i+1,l,r+a[i]);
}
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  sf(n);
  in(i,n)
  {
      sf(a[i]);
  }
  ans(0,0,0);
  pf(mn);
}
