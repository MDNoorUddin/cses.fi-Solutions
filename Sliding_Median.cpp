#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
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


typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;


int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);

  new_data_set p;

  int n,k;
  sf(n);sf(k);
  vector<int> a(n);
  in(i,n)
  {
      sf(a[i]);
      if(i<k)
        p.insert(a[i]);
  }
  if(k%2!=0)
  {
      int in=k/2;
      cout<<*p.find_by_order(in);ps();
  }
  else
  {
      int in=k/2;
      cout<<min(*p.find_by_order(in),*p.find_by_order(in-1));ps();
  }
  for(int i=k,j=0;i<n;i++,j++)
  {
      int id=p.order_of_key(a[j]);
      p.erase(p.find_by_order(id));
      p.insert(a[i]);
      if(k%2!=0)
      {
        int in=k/2;
        cout<<*p.find_by_order(in);ps();
      }
      else
      {
        int in=k/2;
        cout<<min(*p.find_by_order(in),*p.find_by_order(in-1));ps();
      }
  }
}
