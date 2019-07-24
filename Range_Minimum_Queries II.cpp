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

vector<int> a(200001);
vector<ll> tree(800001);
int n,q;

void build(int k,int s,int e)
{
    if(s==e)
    {
        tree[k]=a[s-1];
        return;
    }
    int mid=(s+e)/2;
    build(2*k,s,mid);
    build(2*k+1,mid+1,e);
    tree[k]=min(tree[2*k],tree[2*k+1]);
    return;
}

ll search(int k,int s,int e,int l,int r)
{
    if(s>=l&&e<=r)
    {
        return tree[k];
    }
    if(s>r||e<l)return 9999999999;
    int mid=(s+e)/2;
    return min(search(2*k,s,mid,l,r),search(2*k+1,mid+1,e,l,r));
}

void update(int k,int s,int e,int idx,int val)
{
    if(s==e&&s==idx)
    {
        tree[k]=val;
        a[s-1]=val;
        return;
    }
    int mid=(s+e)/2;
    if(idx<=mid)
    {
        update(2*k,s,mid,idx,val);
    }
    else
    {
        update(2*k+1,mid+1,e,idx,val);
    }
    tree[k]=min(tree[2*k],tree[2*k+1]);
}
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  sf(n);sf(q);
  in(i,n)
  {
      sf(a[i]);
  }
  build(1,1,n);
  int x,y,z;
  while(q--)
  {
      sf(x);sf(y);sf(z);
      if(x==2)
      {
          cout<<search(1,1,n,y,z)<<endl;
      }
      else
      {
          update(1,1,n,y,z);
      }
  }
}
